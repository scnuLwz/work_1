#include<bits/stdc++.h>

using namespace std;

const int N = 2e5 + 10;
typedef long long ll;

ll n,m;
ll a[N],sum[N],lt[N];

void push_d(ll p,ll l,ll r){
	if(!lt[p])  return;
	ll mid=(l+r)>>1;
	lt[p*2]+=lt[p];lt[p*2+1]+=lt[p];
	lt[p]=0;
	sum[p*2]+=lt[p*2]*(mid-l+1);
	sum[p*2+1]+=lt[p*2+1]*(r-mid);
}
void build(ll p,ll l,ll r){
	if(l==r){
		sum[p]=a[l];
		return;
	}
	ll mid=(l+r)>>1;
	build(p*2,l,mid);build(p*2+1,mid+1,r);
	sum[p]=sum[p*2]+sum[p*2+1];
}
void update(ll p,ll nl,ll nr,ll gl,ll gr,ll k){
	if(nl>=gl&&nr<=gr){
		sum[p]=sum[p]+(nr-nl+1)*k;
		lt[p]+=k;
		return;
	}
	push_d(p,nl,nr);
	ll mid=(nl+nr)>>1;
	if(gl<=mid)  update(p*2,nl,mid,gl,gr,k);
	if(gr>mid)  update(p*2+1,mid+1,nr,gl,gr,k);
	sum[p]=sum[p*2]+sum[p*2+1];
}
ll query(int p,int nl,int nr,int gl,int gr){
	ll res=0;
	if(nl>=gl&&nr<=gr)   return sum[p];
	ll mid=(nl+nr)>>1;
	push_d(p,nl,nr);
	if(gl<=mid)  res+=query(p*2,nl,mid,gl,gr);
	if(gr>mid)  res+=query(p*2+1,mid+1,nr,gl,gr);
	return res;
}
int main(){
	cin>>n>>m;
	for(ll i=1;i<=n;i++)  cin>>a[i];
	build(1,1,n); 
	while(m--){
		ll opt,x,y,k;
		cin>>opt>>x>>y;
		if(opt==1){
			cin>>k;
			update(1,1,n,x,y,k);
		}
		else{
			cout<<query(1,1,n,x,y)<<endl;
		}
	}
	return 0;
}
