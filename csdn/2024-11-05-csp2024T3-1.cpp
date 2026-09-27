#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;

int f[N],n,a[N],ans;

int calc(int st,int ed){
	int ans=f[st];
	if(st>ed&&st-1>=1)  return f[st-1];
	if(st==ed)  return f[st];
	for(int i=st+1;i<=ed;i++)  ans+=(a[i]==a[i-1])*a[i];
	return ans;
}
void solve(){
	memset(f,0,sizeof f);
	cin>>n;
	for(int i=1;i<=n;i++)  cin>>a[i];
	for(int i=2;i<=n;i++){
		f[i]=f[i-1];int sum=0;
		for(int j=i-1;j>=1;j--){
			//if(a[i]!=a[j])  continue;
			int st=j+1,ed=i-1;
			//st+1 - ed

			if(st>ed&&st-1>=1)  f[i]=max(f[i],(a[i]==a[j])*a[i]+f[st-1]);
			else if(st==ed)  f[i]=max(f[i],(a[i]==a[j])*a[i]+f[st]);
			else if(st<ed){
				sum+=(a[j+2]==a[j+1])*a[j+1];f[i]=max(f[i],(a[i]==a[j])*a[i]+sum+f[st]);

			}
			//f[i]=max(f[i],(a[i]==a[j])*a[i]+calc(j+1,i-1));

		}
	}
	cout<<f[n]<<endl;
}
int main(){
	int T;cin>>T;
	while(T--)  solve();
	return 0;
}
