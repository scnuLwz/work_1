#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6 + 10;
int n,T,ans,s[N],a[N];

int cal(int l,int r){
	if(l>r)  return 0;
	else return s[r]-s[l-1];
}
signed main(){
	ios::sync_with_stdio(false);
	cin>>T;
	while(T--){
		ans=0;
		cin>>n;
		memset(s,0,sizeof s);
		for(int i=1,x;i<=n;i++)  cin>>x;
		for(int i=1,x;i<=n;i++){
			cin>>a[i];
			s[i]=s[i-1]+abs(a[i]);
		}
		int st1,ed1,st2,ed2;
		st1=ed1=st2=ed2=0;
		for(int i=1;i<=n;i++){
			if(a[i]>=0&&i==1)  st1=1;
			if(a[i]<0){
				ed1=i-1;
				break;
			}
			if(i==n)  ed1=i;
		}
		for(int i=n;i>=1;i--){
			if(a[i]<0&&i==n)  ed2=n;
			if(a[i]>=0){
				st2=i+1;
				break;
			}
			if(i==1)  st2=i;
		}
		if(st1&&ed1){
			int sum=0;
			for(int i=1;i<ed1;i++)
		       sum=max(sum,-a[i]+cal(i+1,ed1));
		    ans+=sum;
		}
		if(st2&&ed2){
			int sum=0;
			for(int i=ed2;i>st2;i--)
			  sum=max(sum,a[i]+cal(st2,i-1));
			ans+=sum;
		}
		//cout<<ed1<<" "<<st2<<" "<<ans<<endl;
	    ans+=cal(ed1+1,st2-1);
	    cout<<ans<<endl;
	}
	return 0;
}
