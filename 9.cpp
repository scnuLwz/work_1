#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
int n,a[N],mx,t[N],q[N]; 
int maxn;
void solve(){
	memset(t,0,sizeof t);memset(q,0,sizeof q);mx=maxn=0;
	cin>>n;bool f=false;
	for(int i=1;i<=n;i++){
		cin>>a[i];t[a[i]]=1;maxn=max(maxn,a[i]);
		if(!a[i])  f=true;  
	}
	if(!f){
		cout<<n<<endl;
		for(int i=1;i<=n;i++)  cout<<i<<" "<<i<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!t[i]){
			mx=i;break;
		}
	}
//	if(!t[mx]){
//		cout<<"-1"<<endl;return;
//	}//子集出现0 -- mx-1 
    if(mx>maxn&&maxn){
    	cout<<"-1"<<endl;return;
	}
	int sum=0,calc=0,lst=1;
	for(int i=1;i<=n;i++){
		if(!q[a[i]]&&a[i]<=mx-1)  sum++;
		q[a[i]]=1;		
		if(sum==mx&&i!=n){
			cout<<2<<endl;
			cout<<1<<" "<<i<<endl<<i+1<<" "<<n<<endl;return;
		}
		else if(i==n){
			cout<<"-1"<<endl;return;
		}
	}
}
int main(){
	int T;cin>>T;
	while(T--)  solve();
	return 0;
}
