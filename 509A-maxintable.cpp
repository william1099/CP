#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i,j,a[101][101];
	cin>>n;
	for (i=1; i<=n; i++) {
		a[i][1]=a[1][i]=1;
	}
	for (i=2; i<=n; i++) {
		for (j=2; j<=n; j++) {
			a[i][j]=a[i][j-1]+a[i-1][j];
		}
	}
	cout<<a[n][n]<<endl;
}
