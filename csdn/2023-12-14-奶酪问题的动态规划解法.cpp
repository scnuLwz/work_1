#include <bits/stdc++.h>

using namespace std;

const int N = 16;

double f[N][34000],ans=1e9;
int n;
double x[20],y[20],a[N][N];
double dis[N];//状压DP数组 在第i个点上，走过的二进制状态的十进制表达为j时，最短的距离
double distanc(int v,int w)//计算第v个和第w个奶酪之间的距离
{
	return sqrt((x[v]-x[w])*(x[v]-x[w])+(y[v]-y[w])*(y[v]-y[w]));//两点间距离公式
}
int main()
{
	memset(f,127,sizeof(f));
	ans=f[0][0];
	cin>>n;
	for(int i=1;i<=n;i++)
	    cin>>x[i]>>y[i];
	x[0]=0;y[0]=0;
	for(int i=0;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			a[i][j]=distanc(i,j);//初始化距离数组
			a[j][i]=a[i][j];
		}
	}
	for(int i=1;i<=n;i++)//初始化
	{
		f[i][(1<<(i-1))]=a[0][i];//在i点上且只有经过i点时距离是原点到i点的距离
	}
	int m=(1<<n);
	for(int i=1;i<=n;i++)  f[i][(1<<(i-1))]=a[0][i];
	for(int S=1;S<m;S++){
		for(int i=1;i<=n;i++){
			if((S&(1<<(i-1)))==0)  continue;
			for(int j=1;j<=n;j++){
				if(i==j)  continue;
				if((S&(1<<(j-1)))==0)  continue;
				f[i][S]=min(f[i][S],f[j][S-(1<<(i-1))]+a[i][j]);
			}
		}
	}
	for(int i=1;i<=n;i++)  ans=min(ans,f[i][(1<<n)-1]);
	printf("%.2f",ans);
    return 0;
}
