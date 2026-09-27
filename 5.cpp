#include<bits/stdc++.h>

using namespace std;

const int N = 3e5 + 10;

int ans,n,a[N];

void solve(){
	cin>>n;bool f=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];if(a[i]!=a[i-1]&&i!=1)  f=false;
	}  
	if(f){
		cout<<"-1"<<endl;return;
	}
	if(a[1]!=a[n]){
		cout<<"0"<<endl;return;
	}
	ans=n;
	//1让前后不相等 
	for(int i=n;i>=1;i--){
		if(a[i]!=a[1])  ans=min(ans,n-i);
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=a[n])
		  ans=min(ans,i-1);
	}
	//让另类相邻
	int lst=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[1]){
			ans=min(ans,i-lst-1);
			lst=i;
		}
	}
	cout<<ans<<endl;
}
int main(){
	int T;cin>>T;
	while(T--)  solve();
	return 0;
}
