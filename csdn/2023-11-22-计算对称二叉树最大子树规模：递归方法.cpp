#include<bits/stdc++.h>
#define rep(i,x,y)  for(int i=x;i<=y;i++)
using namespace std;

const int N = 1e6 + 10;
int n,cnt,ans;
bool vis[N];

struct node{
	int w,l,r;
}a[N];
bool chk(int L,int R){
	if(L==-1&&R==-1)  return true;
	if(L==-1||R==-1)  return false;
	if(a[L].w!=a[R].w)  return false;
	return chk(a[L].l,a[R].r)&&chk(a[L].r,a[R].l);
}
int cal(int p){
	return p==-1?0:cal(a[p].l)+cal(a[p].r)+1;
}
signed main()
{
	cin>>n;
	rep(i,1,n)  cin>>a[i].w;
	rep(i,1,n){
	    cin>>a[i].l>>a[i].r;
    }
	rep(i,1,n)
	  if(chk(i,i))
	    ans=max(ans,cal(i));
	cout<<ans;
	return 0;
}
