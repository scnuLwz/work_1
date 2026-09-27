#include<bits/stdc++.h>

using namespace std;

const int N = 2e6 + 10;

int n,m,Lx,Rx,d,cnt,cx[N];

int read(){
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')  f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-48;ch=getchar();
	}return x*f;
}
struct node{
	int x,y;
	double val;
}e[N<<2];
struct num{
	double x,y;
}a[N];
double dis(double bx,double by,double ex,double ey){
	return sqrt((bx-ex)*(bx-ex)+(by-ey)*(by-ey));
}
void add(int X,int Y){
	e[++cnt]={X,Y,dis(a[X].x,a[X].y,a[Y].x,a[Y].y)};
}
void build(){
	for(int i=2;i<=n;i++)  add(i-1,i);
	for(int i=n+2;i<=d;i++)  add(i-1,i);
	for(int i=1;i<=n;i++){
		int p=lower_bound(cx+1,cx+m+1,a[i].y)-cx;p+=n;
		if(p-1>=n+1)  add(i,p-1);
		if(p+1<=d)  add(i,p+1);
		add(i,p);
	}
}
int fa[N<<2];
int find(int x){
	if(fa[x]!=x)  return fa[x]=find(fa[x]);
	else return x;
}
inline bool cmp(node p,node q){
	return p.val<q.val;
}
void solve(){
	double ans=0;int tot=0;
	for(int i=1;i<=d;i++)  fa[i]=i;
	sort(e+1,e+cnt+1,cmp);
	for(int i=1;i<=cnt;i++){
		int fx=find(e[i].x),fy=find(e[i].y);
		if(fx==fy)  continue;
		++tot;fa[fx]=fy;ans+=e[i].val;
		if(tot==d-1)  break;
	}
	printf("%.2f",ans);
}
int main(){
	n=read();m=read();Lx=read();Rx=read();
	int sumy=0;d=n+m;
	for(int i=1,k;i<=n;i++){
		k=read();sumy+=k;
		a[i]={Lx,sumy};
	}sumy=0;
	for(int i=1,k;i<=m;i++){
		k=read();sumy+=k;
		a[n+i]={Rx,sumy};cx[i]=sumy;
	}
    build();
    solve();
	return 0;
}
