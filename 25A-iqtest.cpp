#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a[102],i,ganjil,genap,c1=0,c2=0;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>a[i];
		if (a[i]%2==0) {
			genap=i;
			c2++;
		}
		else {
			ganjil=i;
			c1++;
		}
	}
	if (c1>c2) {
		cout<<genap<<endl;
	}
	else {
		cout<<ganjil<<endl;
	}
}
