fac[0]=1;
for(int i=1;i<=N;i++){
	fac[i]=fac[i-1]*i%mod;
	inv[i]=invv(fac[i]);
}
