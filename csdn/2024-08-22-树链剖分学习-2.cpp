inline void dfs2(int x,int topf){
    dfn[x]=++cnt;
    wt[cnt]=val[x];
    top[x]=topf;
    if(!son[x])return;
    dfs2(son[x],topf);
    for(int p:v[x]){
        if(p==fa[x]||p==son[x])continue;
        dfs2(p,p);//对于每一个轻儿子都有一条从它自己开始的链
    }
}
