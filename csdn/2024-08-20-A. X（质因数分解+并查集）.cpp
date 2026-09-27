#include<bits/stdc++.h>
#pragma GCC optimze(3)
#define int long long


using namespace std;

const int N = 1e6 + 10, mod = 1e9 + 7;

int n,a[N],t[N],fa[N],minn[N];
vector<int> cnt[N];
map<int,int> mp;
int read(){
	int x=0,f=1;char ch=getchar();
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
int _find(int x){
	if(fa[x]==x)  return x;
	else return fa[x]=_find(fa[x]);
}
int poww(int a,int b){
	int res=1;
	while(b){
		if(b&1)  res=(res*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return res;
}
bool vis[N];
int pri[N],si;
void ai(){
	for(int i=2;i<=N;i++){
		if(!vis[i]){
			vis[i]=true;pri[++si]=i;mp[i]=si;
			for(int j=1;j<=N/i;j++){
				vis[i*j]=true;
				minn[i*j]=i;
			}
		}
	}
}

void marge(int x,int y){
	int f1=_find(x),f2=_find(y);
	fa[_find(x)]=_find(y);
//	cout<<x<<" "<<y<<" "<<f1<<" "<<f2<<endl;
}
void solve(){
	memset(fa,0,sizeof fa);
	n=read();
	for(int i=1;i<=si;i++)  cnt[i].clear();
	memset(t,0,sizeof t);int mx=0;
	for(int i=1;i<=n;i++)  a[i]=read(),mx=max(mx,a[i]);
	int ans=0,sum=0;
	for(int i=1;i<=n;i++){
		int x=a[i];
		while(x>1){
			int fac=minn[x];
		//	cout<<fac<<' '<<x<<endl;
			while(x%fac==0){
				cnt[mp[fac]].push_back(a[i]);
				x/=fac;
			}
		}
	}
//	cout<<_find(6)<<"CCf";

    for(int i=1;i<=n;i++)  fa[a[i]]=a[i];
	for(int i=1;i<=si;i++){
		for(int j=1;j<cnt[i].size();j++){
			int x=cnt[i][j-1],y=cnt[i][j];
			//cout<<x<<" "<<y<<endl;
			marge(x,y);
		}
	}
	for(int i=1;i<=n;i++){
		int x=_find(a[i]);
		//cout<<x<<" ";
		if(!t[x]||x==1){
			sum++;
			t[x]++;
		}
	}
	//cout<<sum<<endl;
	ans=(poww(2,sum)%mod-2+mod)%mod;
	cout<<ans<<endl;
}
signed main(){
	ai();
	int T;T=read();
	while(T--)  solve();
	return 0;
}
