#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;
string cal(int a[]){
	string ans="";
	for(int i=1;i<=5;i++)  ans+=char(a[i]+48);
	return ans;
}
int read(){
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')  f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-'0';ch=getchar();
	}
	return x*f;
}
int n,a[N],ans=1e9,b[N];
map<string,int> t,g;
vector<string> v[20];
int main(){
//	freopen("lock.in","r",stdin);
//	freopen("lock.out","w",stdout);
	n=read();
	for(int q=1;q<=n;q++){
		t.clear();
		ans=0;
		for(int i=1;i<=5;i++){
			a[i]=read();
			b[i]=a[i];
		}
		if(n==1){
			for(int i=1;i<=5;i++)
			   for(int j=0;j<=9;j++){
				  if(b[i]==j)  continue;
				  int last=b[i];
				  b[i]=j;
				  if(!t[cal(b)]){
					t[cal(b)]=true;
					ans++;
				  }
			   }
			for(int i=2;i<=5;i++)
			   for(int j=0;j<=9;j++){
				  int last1=a[i-1],last2=a[i];
				  a[i-1]=(a[i-1]+j)%10;a[i]=(a[i]+j)%10;
				  if(!t[cal(a)]){
					t[cal(a)]=true;
					ans++;
				  }
				  a[i-1]=last1;a[i]=last2;
			   }
			cout<<ans;
			return 0;
	    }
		for(int i=1;i<=5;i++)
			for(int j=0;j<=9;j++){
				if(b[i]==j)  continue;
				int last=b[i];
				b[i]=j;
				if(!t[cal(b)]){
				   t[cal(b)]=true;
				   v[q].push_back(cal(b));
				   ans++;
				   a[i]=last;
				}
			   }
		for(int i=2;i<=5;i++)
			for(int j=0;j<=9;j++){
				int last1=a[i-1],last2=a[i];
				a[i-1]=(a[i-1]+j)%10;a[i]=(a[i]+j)%10;
				if(!t[cal(a)]){
				   t[cal(a)]=true;
				   v[q].push_back(cal(a));
				   ans++;
				}
				a[i-1]=last1;a[i]=last2;
			}
	}
	for(int i=1;i<=n;i++)
	  for(string j:v[i]){
	  	g[j]++;
	  }
	for(int i=1;i<=n;i++){
		int sum=0;
		for(string j:v[i]){
	  	   if(g[j]==n)  sum++;
	    }
	    ans=min(ans,sum);
	}
	cout<<ans;
	return 0;
}
