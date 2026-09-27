inline void dfs1(int x,int f,int deep){
    dep[x]=deep;
    fa[x]=f;
    siz[x]=1;
    int maxson=-1;
    for(int p:v[x]){
        if(p==f)continue;
        dfs1(p,x,deep+1);
        siz[x]+=siz[p];
        if(siz[p]>maxson)son[x]=p,maxson=siz[p];
    }
