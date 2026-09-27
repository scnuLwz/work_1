#include<bits/stdc++.h>
#define rep(i,x,y)  for(int i=x;i<=y;i++)
#define int long long
using namespace std;

const int N = 1e6 + 10 , M = 1e8 - 3;

struct node{
	int d,x;
};
node a[N],b[N];
int tr[N],c[N],n;

void add(int x,int y){
	for(;x<=N;x+=x&-x)
	  tr[x]+=y;
}
int ser(int x){
	int ans=0;
	for(;x;x-=x&-x)
	  ans+=tr[x];
	return ans;
}
void cal(){
	int ans=0;
	rep(i,1,n){
		ans+=ser(N-1)-ser(c[i]);
		while(ans>M)  ans-=M;
		add(c[i],1);
	}while(ans>M)  ans-=M;
	cout<<ans;
}

inline bool cmp(node a,node b){
	if(a.x==b.x)  return a.d<b.d;
	else return a.x<b.x;
}
signed main(){
	cin>>n;
	rep(i,1,n){
		cin>>a[i].x;a[i].d=i;
	}rep(i,1,n){
		cin>>b[i].x;b[i].d=i;
	}sort(a+1,a+n+1,cmp);sort(b+1,b+n+1,cmp);
	rep(i,1,n)  c[a[i].d]=b[i].d;
    cal();
	return 0;
}
