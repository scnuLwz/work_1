#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;


void solve(){
	cin>>n;ll ans=n;
	while(n!=1){
		n/=2;
		ans+=n;
	}
	cout<<ans<<endl;
	
}
int main(){
	int T;cin>>T;
	while(T--)  solve();
	return 0;
}
