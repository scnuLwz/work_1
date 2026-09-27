#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 51 , M = 110 , mod = 998244353;
int n,m,a[N][N],b[N][N],k;
int f[2][46][46][46][91];
int add(int aa,int bb){
	aa+=bb;
	if(aa>mod)  aa-=mod;
	return aa;
}
signed main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=m;j++)
		cin>>a[i][j];
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=m;j++)
		cin>>b[i][j];
	f[1][1][0][0][0]=1;
	for(int i=1;i<=n;i++,cout<<endl)
	  for(int j=1;j<=m;j++){
	  	cout<<f[i&1][j][0][0][k]<<" ";
	  	for(int x=0;x<=n-i;x++)
	  	  for(int y=0;y<=m-j;y++){
	  	  	//买票
	  	    for(int w=0;w<=k;w++){
	  	    	if(w+a[i][j]<=k&&f[i&1][j][x][y][w])
	  	    	  f[i&1][j][x+1][y][w+a[i][j]]=add(f[i&1][j][x+1][y][w+a[i][j]],f[i&1][j][x][y][w]);
			}
	      }
	    for(int x=0;x<=n-i;x++)
	  	  for(int y=0;y<=m-j;y++){
	  	  	//买票
	  	    for(int w=0;w<=k;w++){
	  	    	if(w+b[i][j]<=k&&f[i&1][j][x][y][w])
	  	    	  f[i&1][j][x][y+1][w+b[i][j]]=add(f[i&1][j][x][y+1][w+b[i][j]],f[i&1][j][x][y][w]);
			}
	      }
			//乘车
			for(int w=0;w<=k;w++){
				int nowf=f[i&1][j][x][y][w];
				if(!nowf)  continue;
				if(x)  f[i&1^1][j][x-1][y][w]=add(f[i&1^1][j][x-1][y][w],nowf);
				if(y)  f[i&1][j+1][x][y-1][w]=add(f[i&1][j+1][x][y-1][w],nowf);
			}
		  }
	  	for(int x=0;x<=n-i;x++)
	  	  for(int y=0;y<=m-j;y++)
	  	    for(int w=0;w<=k;w++)
	  	      f[i&1][j][x][y][w]=0;
	  }
	return 0;
}
