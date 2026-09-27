void dfs2(int p,int fa){
	//L[p]为点p的dfn序
	for(int t:g[p]){
		if(t==fa)  continue;
		ans-=BIT.query(R[t])-BIT.query(L[t]);
		dfs2(t,p);
	}
	ans+=BIT.query(R[p])-BIT.query(L[p]);//整个子树
	BIT.add(L[p],1);
}
