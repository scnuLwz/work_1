#include <bits/stdc++.h>

#define int long long
using namespace std;

const int N = 1e6 + 10 , M = 21 , mod = 1e9 + 7;

int f[M][N],fac[N],inv[N];
int q,n,maxn=1e6,m;
bool vis[N];
int fpow(int a,int b){
	int res=1;
	while(b){
		if(b&1)  res=(res*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return res;
}
int C(int x,int y){
	if(x==y)  return 1;
	if(x>y||!x||!y)  return 0;
	return fac[y]*inv[x]%mod*inv[y-x]%mod;
}
int invv(int x){
	return fpow(x,mod-2);
}
void solve(){
	fac[0]=inv[0]=1;
	for(int i=1;i<=maxn;i++){
		fac[i]=fac[i-1]*i%mod;
		inv[i]=invv(fac[i]);
	}
	for(int i=1;i<=maxn;i++)  f[1][i]=1;
	for(int i=1;i<=20;i++){
		for(int j=2;j<=maxn;++j){
			if(!f[i][j])  continue;
    		for(int k=2;k*j<=maxn;k++){
    			f[i+1][k*j]=(f[i+1][k*j]+f[i][j])%mod;
			}
		}
	}
}
signed main(){
	solve();
	cin>>q;
	while(q--){
		cin>>m>>n;
		if(m==1){
			cout<<fpow(2,n-1)<<endl;
			continue;
		}
		int res=0;
		for(int i=1;i<=min(n,20ll);i++){
            res=(res+f[i][m]*C(i,n))%mod;
            //cout<<f[i][m]<<" ";
		}
		res=(res*fpow(2,n-1)%mod)%mod;
		cout<<res<<endl;
	}
    return 0;
}
