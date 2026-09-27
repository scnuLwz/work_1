for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	int cnt=unique(b+1,b+n+1)-b-1;
	for(int i=1;i<=n;i++)  a[i]=lower_bound(b+1,b+cnt+1,a[i])-b;
