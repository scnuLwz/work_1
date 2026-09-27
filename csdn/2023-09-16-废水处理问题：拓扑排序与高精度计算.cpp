#include<bits/stdc++.h>
#define int __int128
using namespace std;

const int N = 1e5 + 10;
int n,m,cnt[N],gcnt[N];
bool g[N];
struct num{
	int fz,fm;
}dis[N];
struct node{
	int d,fz,fm;
};
queue<node> q;
vector<int> v[N];
inline int read(){
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')  f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
void get(int &fz,int &fm){
	int p=__gcd(fz,fm);
	fz/=p;fm/=p;
}
void up(int a1,int b1,int &a2,int &b2){
    a2=a1*b2+a2*b1;b2*=b1;
    get(a2,b2);
}
int a_get(int a,int b){
	if(!a)  return b;
	if(!b)  return a;
	else return a*b/__gcd(a,b);
}
void print(int x){
	if(x>9)  print(x/10);
	putchar(x%10+'0');
}
void print(){
	for(int i=1;i<=n;i++)
	  if(g[i])
	    get(dis[i].fz,dis[i].fm);
	for(int i=1;i<=n;i++)
	  if(g[i]){
	  	print(dis[i].fz);
	  	cout<<" ";
		print(dis[i].fm);
		cout<<endl;
	  }
}
signed main(){
	n=read();m=read();
	for(int i=1,k;i<=n;i++){
		k=read();
		if(!k)  g[i]=true;
		for(int j=1,op;j<=k;j++){
			op=read();v[i].push_back(op);
			++cnt[op];
		}
	}

	for(int i=1;i<=m;i++){
		q.push({i,1,1});dis[i]={1,1};
	}
	while(q.size()){
		node t=q.front();
		q.pop();

		for(int i:v[t.d]){
			cnt[i]--;
			if(!dis[i].fz){
				dis[i].fz=t.fz;dis[i].fm=dis[t.d].fm*v[t.d].size();
			}
			else{
				up(t.fz,t.fm*v[t.d].size(),dis[i].fz,dis[i].fm);
			}
			get(dis[i].fz,dis[i].fm);
			if(!cnt[i])  q.push({i,dis[i].fz,dis[i].fm});
		}
	}
	//cout<<dis[10].fz;
	print();
	return 0;
}
