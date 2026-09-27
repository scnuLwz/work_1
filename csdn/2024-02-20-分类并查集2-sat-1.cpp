#include<bits/stdc++.h>

using namespace std;

const int N = 2e6 + 10;
int n,m,ans,fa[N];


inline int find(int x){
	if(fa[x]!=x)  return fa[x]=find(fa[x]);
	else return x;
}
inline void update(int x,int y){
	if(find(x)!=find(y))
	  fa[find(x)]=find(y);
}
inline int read(){
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')  f=-1;
		ch=getchar();
	}while(ch>='0'&&ch<='9'){
		x=x*10+ch-48;ch=getchar();
	}return x*f;
}
int main(){
	//x是同类 x+n是猎物 x+2*n是天敌
	n=read();m=read();
	for(int i=1;i<=3*n;i++)  fa[i]=i;
    for(int i=1,lx,x,y;i<=m;i++){
    	lx=read();x=read();y=read();
    	if(x>n||y>n||(lx==2&&x==y)){
    		ans++;
    		continue;
		}
		if(lx==1){
			if(find(x+n)==find(y)||find(x+2*n)==find(y)){
				ans++;
				continue;
			}
			update(x,y);update(x+n,y+n);update(x+2*n,y+2*n);
		}else{
			//x吃y
			if(find(x)==find(y)||find(x+2*n)==find(y)){
				ans++;
				continue;
			}
			update(x,y+2*n);update(x+n,y);update(x+2*n,y+n);
		}
	}
	cout<<ans;
	return 0;
}
