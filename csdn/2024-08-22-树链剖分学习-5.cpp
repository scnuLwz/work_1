int ser_son(int x){
	res=0;
	st.query_sum(1,1,n,dfn[x],dfn[x]+siz[x]-1);
	return res;
}
int ser_sum(int x,int y){
	int ans=0;
	while(top[x]!=top[y]){
		if(dep[x]<dep[y])  swap(x,y);
		ans+=st.query(1,1,n,dfn[top[x]],dfn[x]);
		x=fa[top[x]];
	}
	if(dep[x]>dep[y])  swap(x,y);
	ans+=st.query(1,1,n,dfn[x],dfn[y]);
	return ans;
}
