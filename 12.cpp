#include<bits/stdc++.h>

using namespace std;

const int N = 1e5;

int cnt,low[N],dfn[N],n,m,fa[N],ans,sum,val[N],rt;
bool vis[N];
vector<int> v[N];
stack<int> st;
void tarjan(int x){
	dfn[x]=low[x]=++cnt;//时间戳 最早回溯时间戳 
	vis[x]=true;//是否在栈中 
	st.push(x);
	for(int to:v[x]){
		if(!dfn[to]){
			tarjan(to);
			low[x]=min(low[x],low[to]);
		}
		//在栈中：可联通，更新 
		else if(vis[to])  low[x]=min(low[x],dfn[to]);
	}
	if(dfn[x]==low[x]){
		sum=0;//x是强联通分量的根 
		while(st.top()!=x){
			int t=st.top();st.pop();
			fa[t]=x;vis[t]=false;
			val[x]++;
			sum++;
		}
		st.pop();fa[x]=x;vis[x]=false;
		ans=max(ans,sum+1);
	} 
}
int main(){
	cin>>n>>m;
	for(int i=1,x,y,lx;i<=m;i++){
		cin>>x>>y>>lx;
		if(lx==1)  v[x].push_back(y);
		else{
			v[x].push_back(y);
			v[y].push_back(x);
		}
	}
	for(int i=1;i<=n;i++){
		val[i]=1;
	}  
	for(int i=1;i<=n;i++)
	  if(!dfn[i])
	    tarjan(i);
	cout<<ans<<endl;
//	for(int i=1;i<=n;i++)  cout<<val[i]<<" ";
	sum=1e9;
	for(int i=1;i<=n;i++){
		if(val[i]==ans){
			sum=min(sum,i);
			for(int j=1;j<=n;j++){
				if(fa[j]==fa[i]){
					sum=min(sum,j);
				}
			}
		}
	}
//	cout<<sum<<" &&&";
	for(int i=1;i<=n;i++){
		if(fa[i]==fa[sum])
		  cout<<i<<" ";	
	}
	return 0;
}
