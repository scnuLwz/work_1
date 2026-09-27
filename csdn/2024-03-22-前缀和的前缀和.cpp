#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6 + 10;

int n,m,a[N];
class BIT{
private:
	int tr[N<<2];
public:
	void update(int x,int k){
		for(;x<=n;x+=x&-x)
		  tr[x]+=k;
	}
	int query(int x){
		int ans=0;
		for(;x;x-=x&-x)
		  ans+=tr[x];
		return ans;
	}
}t1,t2;
signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];t1.update(i,a[i]);t2.update(i,a[i]*i);
	}
	for(int i=1,x,k;i<=m;i++){
		string opt;
		cin>>opt>>x;
		if(opt[0]=='M'){
			cin>>k;
			t1.update(x,k-a[x]);t2.update(x,(k-a[x])*x);
			a[x]=k;
		}
		else{
			cout<<(x+1)*t1.query(x)-t2.query(x)<<endl;
		}
	}
	return 0;
}
