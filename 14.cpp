#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10 , M = 256 , Mod = 998244353;

int f[2][M],n,k,b[M],ans;//前i位用了j次方案数 

int count(int x){
	int sum=0;
	while(x){
		if(x&1)  sum++;
		x>>=1;
	}
	return sum;
}
void solve(){
	memset(f,0,sizeof f);
	cin>>n>>k;ans=0;
	for(int S=0;S<=255;S++){
		if(b[S]>k)  continue;
		f[0][S]=1;
	} 
	int t=0;
	for(int i=9;i<=n;i++){
		t^=1;  memset(f[t],0,sizeof f[t]); 
		
		for(int S=0;S<=255;S++){
			if(b[S]>k)  continue;
			int _S0,_S1;
			_S0=(S>>1);_S1=(_S0|128);//最前面是1或0都行 
			if((S&1)){  //这一位填1 
				f[t][S]=(f[t][S]+f[t^1][_S0])%Mod;f[t][S]=(f[t][S]+f[t^1][_S1])%Mod;
			}
			else{		
				if(b[S]==k){  //最前面不能填1 
				    f[t][S]=(f[t][S]+f[t^1][_S0])%Mod;
				}
				else{
					f[t][S]=(f[t][S]+f[t^1][_S0])%Mod;f[t][S]=(f[t][S]+f[t^1][_S1])%Mod;
				}
			}
		}
	}
	for(int S=0;S<=255;S++){
		if(b[S]>k)  continue;ans=(ans+f[t][S])%Mod;
	}
	cout<<ans<<endl;
}
int main(){
	ios::sync_with_stdio(false);
//	ios::sync_with_stdio(false);
	for(int i=0;i<=255;i++)  b[i]=count(i);
	int T;cin>>T;
	while(T--)  solve();
	return 0;
}
