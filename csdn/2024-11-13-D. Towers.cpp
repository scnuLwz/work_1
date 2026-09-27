#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5010;

int n,a[N],f[N],s[N],g[N][N];

void solve(){

	memset(g,0x3f,sizeof g);
	f[1]=1;g[1][1]=a[1];//以i为结尾而且分成了j段的最小值
	for(int i=2;i<=n;i++){
		f[i]=f[i-1];g[i][f[i]]=g[i-1][f[i-1]]+a[i];
		for(int j=i-1;j>=1;j--){
			//j+1 ~ i 分成一段
			int lst=g[j][f[j]],h=s[i]-s[j];
		    if(h>=lst){
		    	if(f[j]+1>=f[i]){
		    		f[i]=f[j]+1;
		    		if(g[i][f[i]]>h)  g[i][f[i]]=h;
				}
			}
		}
	}
	cout<<min(n-f[n],n-1);//
}
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	solve();
	return 0;
}
