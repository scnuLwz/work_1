int _find(int x){
	if(fa[x]==x)  return x;
	return fa[x]=_find(fa[x]);//路径压缩
	//return _find(fa[x])  更新子节点至父节点
}
