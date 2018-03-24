#include <bits/stdc++.h>

using namespace std;

int main() {
	long int i,n,m,a[101][101],count[5][101]={0},j,besar=-1;
	cin>>n>>m;
	for (i=1; i<=m; i++) {
		long int maxx=0,max=-1;
		for (j=1; j<=n; j++) {
			cin>>a[i][j];
			if (a[i][j]>max) {
				max=a[i][j]; maxx=j; 
			}
			else if (a[i][j]==max) {
				maxx=min(maxx,j);
			}
		}
		count[0][maxx]++;	 // pake count[maxx] juga bisa
	}
	int temp=0;
	for (i=1; i<=n; i++) {
		if (count[0][i]>besar) {
			besar=count[0][i];
			temp=i;
		}
	}
	cout<<temp<<endl;
	/*  mubajir
	for (i=1; i<=n; i++) {
		if (count[0][i]>besar) 	besar=count[0][i];
	}
		for (i=1; i<=n; i++) {
			if (count[0][i]==besar) {
				cout<<i<<endl;
				break;
			}
		}
		*/	
}
