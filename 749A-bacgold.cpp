#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n;
	cin>>n;
	if (n%2==0) {
		cout<<n/2<<endl;
		for (int i=1; i<=n/2; i++) {
			cout<<2;
			if (i<=n/2-1) cout<<" ";
		}
	}
	else {
		cout<<n/2<<endl;
		for (int i=1; i<=n/2-1; i++) {
			cout<<2<<" ";
		}
		cout<<3<<endl;
	}
}
