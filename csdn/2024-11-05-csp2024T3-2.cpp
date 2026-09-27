#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6 + 10;

int f[N],n,a[N],ans,q[N],mx,g[N],maxn,lst[N];
vector<int> v[N];
void solve(){
	memset(f,0,sizeof f);memset(q,0,sizeof q);maxn=0;memset(g,0,sizeof g);memset(lst,0,sizeof lst);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];maxn=max(maxn,a[i]);
		if(a[i]==a[i-1])  q[i]=a[i];
		q[i]+=q[i-1];
		v[a[i]].push_back(i);
	}
	for(int i=2;i<=n;i++){
		f[i]=f[i-1];int sum=0;f[i]=max(f[i],(a[i]==a[i-1])*a[i]+f[i-1]);
		if(i>2)  f[i]=max(f[i],(a[i]==a[i-2])*a[i]+f[i-1]);
		for(int j=lst[a[i]];j<v[a[i]].size();j++){
			int t=v[a[i]][j];
			if(t>i-3){
				lst[a[i]]=j;
				break;
			}
			f[i]=max(f[i],a[i]+q[i-1]-q[t+1]+f[t+1]);
		}
	}
	cout<<f[n]<<endl;
	for(int i=1;i<=maxn;i++)  v[i].clear();
}
signed main(){
	int T;cin>>T;
	while(T--)  solve();
	return 0;
}
