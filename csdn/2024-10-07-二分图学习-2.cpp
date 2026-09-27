void dfs(int p,int fa,int val){
	g[p]=true;if(!is)  return;
	for(node t:v[p]){
		if(t.y==fa||t.val<=val)  continue;
		if(g[t.y]){
			if(f[p]==1&&f[t.y]==1||f[p]==2&&f[t.y]==2)
			  is=false;
		}
		else{
			f[t.y]=f[p]==1?2:1;
		    dfs(t.y,p,val);
		}
	}
}
