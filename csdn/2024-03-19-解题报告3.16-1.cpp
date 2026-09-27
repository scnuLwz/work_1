#include<bits/stdc++.h>
#define int long long


#define go(p)  int ls=p<<1,rs=p<<1|1;


using namespace std;

const int N = 1e6 + 10;

int n,a[N],b[N],t[N],root;

void dfs(int p,int l,int r){
	t[p]=a[l];
	if(l==r)  return;
	int mid=l+r>>1;
	dfs(p<<1,mid+1,r);dfs(p<<1|1,l+1,mid);
}
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++)  cin>>a[i];
	sort(a+1,a+n+1);
	dfs(1,1,n);
	for(int i=1;i<=n;++i)  cout<<t[i]<<" ";
	return 0;
}
