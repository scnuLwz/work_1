void upd_range(int x,int y,int k){
	k%=mod;
	while(top[x]!=top[y]){
		if(dep[top[x]]<dep[top[y]])  swap(x,y);
		st.upd(1,1,n,dfn[top[x]],dfn[x],k);
		x=fa[top[x]];
	}
	if(dep[x]>dep[y])  swap(x,y);
	st.upd(1,1,n,dfn[x],dfn[y],k);
}
