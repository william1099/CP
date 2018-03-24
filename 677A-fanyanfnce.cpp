#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,h,a[1001],i;
	long int count=0;
	cin>>n>>h;
	for (i=1; i<=n; i++) {
		cin>>a[i];
		if (a[i]>h) {
			count+=2;
		}
		else {
			count++;
		}
	}
	cout<<count<<endl;
}
