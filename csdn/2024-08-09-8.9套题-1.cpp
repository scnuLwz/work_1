#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;

int n,k,d[N],tot;
bool vis[N];
struct node{
	int id,val;
}a[N];
vector<int> v[N];
inline bool cmp(node p,node q){
	if(p.val!=q.val)  return p.val>q.val;
	else return p.id<q.id;
}
void dfs1(int p,int fa){
	for(int t:v[p]){
		if(t==fa)  continue;
		d[t]=d[p]+1;
		dfs1(t,p);
	}
}
void dfs2(int p,int fa){
	if(vis[p])  return;
	tot++;
	vis[p]=true;
	for(int t:v[p]){
		if(t==fa||d[t]>=d[p])  continue;
		dfs2(t,p);
	}
}
int main(){
	cin>>n>>k;
	for(int i=1,x;i<n;i++){
		cin>>x;
		v[i].push_back(x);
		v[x].push_back(i);
	}
    dfs1(k,-1);vis[k]=true;
    for(int i=0;i<n;i++){
    	a[i].id=i;a[i].val=d[i];
	}
	sort(a,a+n,cmp);
//	for(int i=0;i<n;i++)  cout<<a[i].id<<" ";
    for(int i=0;i<n;i++){
    	tot=0;
    	dfs2(a[i].id,-1);
    	a[i].val=tot;
//    	cout<<tot<<" "<<a[i].id<<endl;
	}
	sort(a,a+n,cmp);
	cout<<k<<endl;
	for(int i=0;i<n;i++){
		if(a[i].val)
		  cout<<a[i].id<<endl;
	}
	return 0;
}
