	for(int i=1;i<=Q&&j<=m;i++){
		while(a[j].val<=q[i].x&&j<=m){
			uni(a[j].x,a[j].y);
			j++;
		}
		f[q[i].id]=ans;
	}
	for(int i=1;i<=Q;i++)  cout<<f[i]<<endl;
