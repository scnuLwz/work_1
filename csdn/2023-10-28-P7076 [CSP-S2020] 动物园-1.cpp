#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;

const int N = 1e6 + 10;
int n,m,c,k,ans;
int a[N],b[N],d[N];
bool v[N];

void print(__int128 p){
	if(p>9)  print(p/10);
	putchar(p%10+'0');
}
signed main(){
//	cout<<(100>>10);
	cin>>n>>m>>c>>k;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		for(int j=k-1;j>=0;j--)
		  a[j]|=(x>>j)&1;
	}
//	for(int i=0;i<=30;i++)  cout<<a[i];
    for(int i=1,x,y;i<=m;i++){
    	cin>>x>>y;
    	if(!a[x]){
    		v[x]=true;
    		//x位一定不为1
		}
	}
	int sum=0;
	for(int i=0;i<k;i++){
		if(!v[i])  sum++;
	}
	if(sum<64){
		__int128 ans=pow(2,sum);ans-=n;
	    print(ans);
	}
	else{
		if(n==0)  cout<<"18446744073709551616";
		else{
			__int128 p=pow(2,64);p-=n;
			print(p);
		}
	}
	return 0;
}
//100 110
