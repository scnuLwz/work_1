#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7 , N = 110 , M = 1e5 + 10;

int n,m,k,f[2][M],len[M],bel[M],cnt,now;
signed main(){
	cin>>n>>m;
	int l=1,r=0;
	while(l<=m){
		r=m/(m/l);
		++k;
		bel[k]=r;len[k]=(r-l+1);
		l=r+1;
	}
	for(int i=1;i<=k;i++)  f[0][i]=len[i]+f[0][i-1];
	for(int p=1;p<n;p++){
		now^=1;
		int j=k;
		for(int i=1;i<=k;i++){
			while(bel[j]*bel[i]>m)  j--;
			f[now][i]=(f[now][i-1]+f[now^1][j]*len[i])%mod;
		}
	}
	cout<<f[now][k];
	return 0;
}
