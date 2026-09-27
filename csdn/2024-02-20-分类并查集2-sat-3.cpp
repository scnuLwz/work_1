bool chk(int x,int y){
	return find(x)==find(y);
}
int ans=0;
	rep(i,1,n)
	  if(chk(i,i+n))
	    ans++;
	cout<<ans<<endl;
