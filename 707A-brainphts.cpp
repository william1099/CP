#include <bits/stdc++.h>

using namespace std;

int main() {
	int m,n,i,j;
	char a[101][101];
	bool flag=0;
	cin>>n>>m;
	for (i=1; i<=n; i++) {
		for (j=1; j<=m; j++) {
			cin>>a[i][j];
			if (a[i][j]=='C' || a[i][j]=='Y' || a[i][j]=='M') {
				flag=1;
			}
		}
	}
	(flag)? cout<<"#Color\n" : cout<<"#Black&White\n";
}
