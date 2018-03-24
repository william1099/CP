#include <bits/stdc++.h>

using namespace std;

int main() {
	int m,n,i=0,ans;
	bool flag=0;
	cin>>n>>m;
	while (n/2-i>=0) {
		ans=(n/2-i)+n-(n/2-i)*2;
		i++; 
		if (ans%m==0) {
			flag=1;
			break;
		}
	}
	(flag)? cout<<ans<<endl : cout<<"-1"<<endl;
}
