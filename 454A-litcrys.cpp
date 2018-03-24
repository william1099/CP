#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	char a[105][105];
	cin>>n;
	int mid=(n+1)/2;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			a[i][j]='*';
		}
	}
	for (int i=1; i<=mid; i++) {
		for (int j=mid; j<=mid-1+i; j++) {
			a[i][j]='D';
		}
		for (int j=mid; j>=mid-i+1; j--) {
			a[i][j]='D';
		}
	}
	for (int i=mid+1; i<=n; i++) {
		for (int j=mid; j<=mid-i+n; j++ ) {
			a[i][j]='D';
		}
		for (int j=mid; j>=mid+i-n; j--) {
			a[i][j]='D';
		}
	}
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			cout<<a[i][j];
		}
		printf("\n");
	}
}
