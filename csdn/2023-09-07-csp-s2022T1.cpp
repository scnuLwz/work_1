#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2510;

int n,m,c,a[N],f[N][N],dis[N],ans,cnt[N];

vector<int> v[N];

inline int read()
{
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9')
        x=x*10+ch-'0',ch=getchar();
    return x*f;
}
struct node{
    int d,w;
};
node s[N][N];

inline bool cmp(node p,node q){
    if(p.w!=q.w)  return p.w>q.w;
    else return p.d<q.d;
}
void bfs(int p){
    memset(dis,0x3f,sizeof dis);
    dis[p]=0;
    queue<int> q;
    q.push(p);
    while(q.size()){
        int t=q.front();
        q.pop();
        for(int i:v[t]){
            if(dis[t]+1<dis[i]){//你加等于会导致多跑一些没用的东西
                dis[i]=dis[t]+1;
                q.push(i);
            }
        }
    }
}
signed main()
{
    memset(f,0x3f,sizeof f);
    n=read();m=read();c=read();
    for(int i=1;i<n;i++)  a[i+1]=read();
    for(int i=1,x,y;i<=m;i++){
        x=read();y=read();
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        bfs(i);
        for(int j=1;j<=n;j++){
            f[i][j]=dis[j];
        }
    }
    ++c;
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++)
        {
            //j->i
            if(f[j][i]>c||f[1][j]>c||i==j)  continue;
            //cout<<j<<" "<<i<<endl;
            s[i][++cnt[i]]={j,a[j]};//维护一个当前点能到达的点权最大值
        }
    }
    for(int i=1;i<=n;++i)  sort(s[i]+1,s[i]+cnt[i]+1,cmp);//取前3个
//  cout<<f[2][5];
    for(int j=2;j<=n;j++)
      for(int k=2;k<=n;k++){
        if(j==k)  continue;
        for(int p=1;p<=3;p++)
          for(int q=1;q<=3;q++){
            int f1=s[j][p].d,f2=s[k][q].d,w1=s[j][p].w,w2=s[k][q].w;
            if(f1==f2||f1==j||f1==k||f2==j||f2==k||j==k||f[j][k]>c||!f1||!f2)  continue;
            //cout<<f1<<" "<<j<<" "<<k<<" "<<f2<<" "<<w2+w1+a[j]+a[k]<<endl;
            ans=max(ans,a[j]+a[k]+w1+w2);
          }
      }
    cout<<ans;
    return 0;
}
