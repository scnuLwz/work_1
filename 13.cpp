#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;

int fa[N],n,m; 
int _find(int x){
	if(fa[x]==x)  return x;
	return fa[x]=_find(fa[x]);//路径压缩 
	//return _find(fa[x])  更新子节点至父节点 
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)  fa[i]=i;
	for(int i=1,opt,x,y;i<=m;i++){
		cin>>opt>>x>>y;
		if(opt==1){
			x=_find(x),y=_find(y);
			fa[x]=y;
		}
		else{
			if(_find(x)==_find(y))  cout<<"Y"<<endl;
			else cout<<"N"<<endl;
		} 
	} 
	return 0;
}
