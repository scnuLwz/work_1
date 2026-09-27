#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 1e6 + 10;

int T,n,na,nb,a[N],fa[N];
map<int,int> w;
int find(int x){
	if(fa[x]!=x)  return fa[x]=find(fa[x]);
	else return x;
}
void add(int x,int y){
	int f1=find(x),f2=find(y);
	if(f1!=f2){
		fa[f1]=f2;
	}
}
void solve() {
	w.clear();
	cin>>n>>na>>nb;
    for(int i=1;i<=n;i++){
    	cin>>a[i];w[a[i]]=i;
	}
    for(int i=1;i<=2*n;++i)  fa[i]=i;
	bool fs=true;
	for(int i=1;i<=n;i++){
		//A:x na-x B:y+n nb-y+n
		int x=w[na-a[i]],y=w[nb-a[i]];
		if(!x&&!y){
			fs=false;
			break;
		}
		if(!x){
			fa[i]=fa[find(y)];
			fa[i+n]=fa[find(y+n)];continue;
		}
		if(!y){
			fa[i]=fa[find(x)];
			fa[i+n]=fa[find(x+n)];
			continue;
		}
	    if(x==i||y==i)  continue;
	    //if(x&&y){
	    	fa[x]=fa[find(y+n)];
	    	fa[y]=fa[find(x+n)];
	//	}
	}
	for(int i=1;i<=n;i++)
	  if(find(i)==find(i+n))
	    fs=false;
	if(fs)  cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
signed main() {
    cin >> T;
    while (T--) solve();
    return 0;
}
