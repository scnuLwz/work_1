#include<bits/stdc++.h>
#define int long long

#define go(p)  int ls=p<<1,rs=p<<1|1;

using namespace std;

const int N = 1e3 + 10;
const int dx[8] = { 1, 0, -1, 0, 1, 1, -1, -1 };
const int dy[8] = { 0, 1, 0, -1, 1, -1, 1, -1 };
int a[N][N];
int n,Q;
int b[N][N],v[N][N],dis[N][N];

struct node{
	int x,y;
}d[N];
int qx[N*N],qy[N*N];
void bfs(int x, int y, int z) {
    qx[1] = x, qy[1] = y;
    int head = 1, tail = 1, ans = 2147483647;
    while (head <= tail) {
        for (int j = 0; j < 8; ++j) {
            int X = qx[head] + dx[j], Y = qy[head] + dy[j];
            if (b[X][Y] && !v[X][Y] && a[X][Y] == z)
                v[X][Y] = 1, qx[++tail] = X, qy[tail] = Y;
            else if (!b[X][Y])
                ans = min(ans, dis[X][Y] + a[X][Y]);
        }
        ++head;
    }
    for (int i = 1; i <= tail; ++i) b[qx[i]][qy[i]] = 0, dis[qx[i]][qy[i]] = ans;
}
void solve(){
	int bx,by;
	cin>>bx>>by;
	cout<<dis[bx][by]<<" ";
}
signed main(){
	cin>>n>>Q;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			char c;
			cin>>c;a[i][j]=c-48;
			b[i][j]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		    if(b[i][j])
		      bfs(i,j,a[i][j]);
		}
	}
	while(Q--)  solve();
	return 0;
}
