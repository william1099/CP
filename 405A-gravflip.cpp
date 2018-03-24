#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a[101],i;
	bool flag=0;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for (i=1; i<=n; i++) {
		if (flag) {
			cout<<" ";
		}
		cout<<a[i];
		flag=1;
	}
	printf("\n");
}
