#include<bits/stdc++.h>

using namespace std;


const int N = 1e6 + 10;

int a[N],b[N],n,m;

int lowbit(int x){
	return x&(-x);//访问x的二进制最低位1的位置 
}

int add(int x,int k){  //在位置x加上k
	for(;x<=n;x+=lowbit(x))
		b[x]+=k;
}
int query(int x){  //访问前x的位置的前缀和 
    int res=0;
	for(;x>0;x-=lowbit(x))
	  res+=b[x];
	return res;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];add(i,a[i]); 
	}  
	while(m--){
		int opt,x,y;
		cin>>opt>>x>>y;
		if(opt==1)   add(x,y);
		else cout<<query(y)-query(x-1)<<endl;
	}
	return 0;
}
