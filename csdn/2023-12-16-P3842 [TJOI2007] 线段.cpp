#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 10;

int f[N][2],n,a[N],b[N];

signed main(){
	memset(f,0x3f,sizeof f);
	cin>>n;
	for(int i=1;i<=n;i++)  cin>>a[i]>>b[i];
	f[1][1]=b[1]-1;f[1][0]=b[1]+(b[1]-a[1]);
//	cout<<f[1][1]<<" "<<f[1][0]<<endl;
	for(int i=2;i<=n;i++){
	    f[i][0]=min(f[i-1][0]+abs(b[i]-a[i-1])+(b[i]-a[i]),f[i-1][1]+abs(b[i]-b[i-1])+(b[i]-a[i]))+1;
	    f[i][1]=min(f[i-1][0]+abs(a[i]-a[i-1])+(b[i]-a[i]),f[i-1][1]+abs(a[i]-b[i-1])+(b[i]-a[i]))+1;
	}
	int ans=min(f[n][0]+n-a[n],f[n][1]+n-b[n]);
	cout<<ans;
	return 0;
}
