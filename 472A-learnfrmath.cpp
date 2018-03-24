#include <bits/stdc++.h>
bool cek(long int x);
using namespace std;

int main() {
	long int n;
	int i;
	cin>>n;
	for (i=4; i<=n/2; i++) {
		if (cek(i) && cek(n-i)) {
			cout<<i<<" "<<n-i<<endl;
			break;
		}
	}
}

bool cek(long int x) {
	int i;
	for (i=2; i<=sqrt(x); i++) {
		if (x%i==0) {
			return (1);
		}
	}
	return (0);
}
