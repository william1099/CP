#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i,count=0,a[101],b[101],c;
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		scanf("%d %d",&a[i],&b[i]);
		c=b[i]-a[i];
		if (c>=2) {
			count++;
		}
		 
	}
	cout<<count<<endl; 
	
}
