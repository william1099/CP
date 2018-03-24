#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,i,r,count=0;
	cin>>n>>r;
	for (i=1; i<=n; i++) {
		if (r%i==0 && r/i<=n) {
			count++;
		}
	}
	cout<<count<<endl;
}
