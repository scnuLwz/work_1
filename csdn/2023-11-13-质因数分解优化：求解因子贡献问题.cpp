#include<bits/stdc++.h>
#define int long long
#define rep(i,x,y)  for(int i=x;i<=y;i++)
using namespace std;

const int N = 1e4 + 10 , M = 1500 , mod = 998244353;
int n,w,a[N],pri[N],cnt,ans=1;
bool v[N];
void ai(){
	for(int i=2;i<N;i++){
		if(!v[i]){
			v[i]=true;pri[++cnt]=i;
			for(int j=2;i*j<N;j++)
			  v[i*j]=true;
		}
	}
}
int f[M][N];priority_queue<int,vector<int>,greater<int> > q;
signed main(){
	cin>>n>>w;
	ai();
	rep(i,1,n){
		int x;
		cin>>x;
		if(x>1){
			rep(j,1,cnt){
				//cout<<pri[j]<<endl;
				while(x%pri[j]==0){
					f[j][i]++;
					x/=pri[j];
				}
			}
		}
	}
	rep(T,1,cnt){
		rep(i,1,n)  q.push(f[T][i]);
		while(w%pri[T]==0){
			int t=q.top();q.pop();
			q.push(++t);w/=pri[T];
		}while(q.size()){
			cout<<q.top()+1<<" ";
			ans*=(q.top()+1);ans%=mod;
			q.pop();
		}cout<<endl;
	}cout<<ans;
	return 0;
}
