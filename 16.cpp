#include<bits/stdc++.h>

using namespace std;

const int N = 110;

int a[N],n,w,t[N],s[N],cnt;
void solve(){
	cin>>n;memset(t,0,sizeof t);cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==i)  t[i]=1;
	}  
	for(int i=1;i<=n;i++){
		if(!t[i])  s[++cnt]=a[i];
	}
	bool f=true;
	for(int i=2;i<=cnt;i++){
		if(s[i]>s[i-1]){
			f=false;break;
		}
	}
	if(f)  cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main(){
	int T;cin>>T;
	while(T--)  solve();
	return 0;
}
