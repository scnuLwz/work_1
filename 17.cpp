#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll N = 2e5 + 10 , M = 1e7 + 10 , C = N * M;

int n,m;
ll a[N],h[N];

priority_queue<int> q;
void solve(){
	
	cin>>n>>m;//算最小子串和，找最小 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		//f[i]=C;
		h[i]=-C;
	}  
	h[n]=a[n]*m;
	for(int i=n-1;i>=1;i--)  h[i]=max(h[i+1],a[i]*m);ll sum=0,ans=0;
	for(int i=1;i<m;++i){
		q.push(a[i]);sum+=a[i];
	}  //维护最小的m-1位 
	ans=h[m]-sum;
	for(int i=m;i<n;i++){
		int t=q.top();
		if(a[i]<t){
			q.pop();q.push(a[i]);sum+=(a[i]-t);
		}
		ans=max(ans,h[i+1]-sum);
		//cout<<h[i+1]<<" "<<sum<<" "<<i<<endl;
	} 
	cout<<ans<<endl;
	while(q.size())  q.pop();
}
int main(){
	ios::sync_with_stdio(false);
	int T;cin>>T;
	while(T--)  solve();
	return 0;
}
