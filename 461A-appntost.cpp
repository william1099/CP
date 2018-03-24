#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,a[300005],count=0;
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for (int i=1; i<=n-1; i++) {
		count+=a[i]*(i+1);
	}
	count+=a[n]*n;
	cout<<count<<endl;
}
