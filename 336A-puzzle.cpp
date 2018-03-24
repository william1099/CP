#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m,k=0,a[101],i,b[101],min=99999;
	scanf("%d %d",&n,&m);
	for (i=1; i<=m; i++) {
		scanf("%d",&a[i]);
	}
	sort(a+1,a+m+1);
	for (i=1; i<=m-n; i++) {
		b[k]=a[n-1+i]-a[i];
		if (min>b[k]) {
			min=b[k];
		}
	}
	cout<<min<<endl;
}
