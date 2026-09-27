#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int n,m,bl,w[N],maxn,dis[N];
bool f[N];

struct node{
	int to,val;
};
struct dij{
	int val,s;
	bool operator<(const dij& other) const{
		return val > other.val;
	}
};
vector<node> v[N];
priority_queue<dij> q; 
bool chk(int p){  //这条路上的点权不超过p
    memset(dis,0x3f,sizeof dis);memset(f,false,sizeof f); 
	q.push({0,1});dis[1]=0;
	while(q.size()){
		int t=q.top().s;q.pop();
		if(f[t])  continue;
		f[t]=true;
		for(node nx:v[t]){
			if(dis[nx.to]>dis[t]+nx.val&&w[nx.to]<=p&&w[t]<=p){
				dis[nx.to]=dis[t]+nx.val;
				q.push({dis[nx.to],nx.to});
			}
		}
	}
	return dis[n]<=bl;
}
int main(){
	cin>>n>>m>>bl;
	for(int i=1;i<=n;i++){
		cin>>w[i];maxn=max(maxn,w[i]);
	}  
	for(int i=1,x,y,z;i<=m;i++){
		cin>>x>>y>>z;
		v[x].push_back({y,z});
		v[y].push_back({x,z});
	}
	
	int lf=0,ri=maxn;
	while(lf<ri){
		int mid=(lf+ri)>>1;
		if(chk(mid))  ri=mid;
		else lf=mid+1;
	}
	if(chk(lf))  cout<<lf;
	else cout<<"AFK";
	return 0;
}
