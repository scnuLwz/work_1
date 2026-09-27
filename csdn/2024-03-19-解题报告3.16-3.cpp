#include<bits/stdc++.h>
#define int long long

#define go(p)  int ls=p<<1,rs=p<<1|1;

using namespace std;

const int N = 1e6 + 10;
int n,m,a[N],s[N];

void insert(int l,int r,int p){
	s[l]+=p;s[r+1]-=p;
}
signed main(){
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		insert(i,i,a[i]);
	}
	for(int i=1,l,r,k;i<=m;i++){
		cin>>l>>r>>k;
		insert(l,r,k);
	}
	for(int i=1;i<=n;i++)  s[i]+=s[i-1];
	for(int i=1;i<=n;i++)  cout<<s[i]<<" ";
	return 0;
}
