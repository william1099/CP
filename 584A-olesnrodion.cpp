#include <bits/stdc++.h>
#define mod 1e9+7
using namespace std;

int main() {
	int n,t,i;
	cin>>n>>t;
	if (t==10) {
		if (n==1) {
			cout<<"-1"<<endl;
		}
		else {
			cout<<"1";
			for (i=1; i<=n-1; i++) {
				cout<<"0";
			}
			printf("\n");
		}
	}
	else {
		cout<<t;
		for (i=1; i<=n-1; i++) {
			cout<<"0";
		}
		printf("\n");
	}
}





/* tipe data tidak memenuhi jika ans ada 100 digit
int main() {
	int n,t;
	bool flag=0;
	unsigned long long ans=1;
	cin>>n>>t;
	while (n>=1) {
		ans=ans*10;
		n--;
	}
	ans-=1;
	while (1 && ans>0) {
		if (ans%t==0) {
			flag=1;
			break;
		}
		ans--;
	}
	if (flag) {
		cout<<ans<<endl;
	}
	else {
		cout<<"-1"<<endl;
	}
	
}
*/
