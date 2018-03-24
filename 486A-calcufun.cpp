#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,i;
	cin>>n;
	if (n%2==0) {
		cout<<n/2<<endl;
	}
	else {
		cout<<(n-(n+n))+(n/2)<<endl;
	}
}
