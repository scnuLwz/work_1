#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
int n,cnt[N],ans;
void solve(){
	memset(cnt,0,sizeof cnt);
	cin>>n;ans=0;
	for(int i=1,u,v;i<n;i++){
		cin>>u>>v;
		cnt[u]++;cnt[v]++;
	}
	for(int i=1;i<n;i++)  
	  if(cnt[i]==1)
	    ans++;
	cout<<(ans+1)/2<<endl;
}
int main(){
	int T;cin>>T;
	while(T--)  solve();
	return 0;
}
