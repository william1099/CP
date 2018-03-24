#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,d,t,count=0,i,ans;
	cin>>n>>d;
	for (i=1; i<=n; i++) {
		cin>>t; 
		count+=t;
	}
	ans=(d-count)/5;
	count=count+(n-1)*10;   // 3 kali nyanyi 2 kali ngelawak (cara paling minimal) (awal nyanyi dulu bukan ngelawak)
	(count<=d) ? cout<<ans<<endl : cout<<"-1"<<endl;
}
