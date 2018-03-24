#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[31],b[31],n,count=0,i,j;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>a[i]>>b[i];
	}
	for (i=1; i<=n; i++) {
		for (j=1; j<=n; j++) {
			if (a[i]==b[j]) {
				count++;
			}
		}
	}
	cout<<count<<endl;
}
