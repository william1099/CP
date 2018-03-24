#include <bits/stdc++.h>

using namespace std;

int main() {
	int i,j,b,c,hasil,a[101][101];
	for (i=1; i<=5; i++) {
		for (j=1; j<=5; j++) {
			scanf("%d",&a[i][j]);
			if (a[i][j]==1) {
				b=i; c=j;
			}
		}
	}
	if (a[b][c]!=a[3][3]) {
		b=abs(3-b);
		c=abs(3-c);
		hasil=b+c;
	} 
	else {
		hasil=0;
	}
	cout<<hasil<<endl;
	
}
