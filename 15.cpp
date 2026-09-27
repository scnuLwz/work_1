#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10 , M = 256 , Mod = 998244353;

int n,k,b[M],ans;//前i位用了j次方案数 

int count(int x){
	int sum=0;
	while(x){
		if(x&1)  sum++;
		x>>=1;
	}
	return sum;
}
int main(){
	int T;cin>>T;
	while(T--){
		cin>>n;
		if(count(n)%2==1)  cout<<"Orange"<<endl;
		else cout<<"Me"<<endl;
	}
	return 0;
}
