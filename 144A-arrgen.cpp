#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[101],i,n,min=999,max=0,minn,maxx;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>a[i];
		if (a[i]<=min) {
			min=a[i]; minn=i;		
		}
		if (a[i]>max) {
			max=a[i]; maxx=i;
		}
	} 
	if (maxx<minn) {
	minn=n-minn; maxx=maxx-1;	
	}
	else {
	minn=n-minn; maxx=maxx-2;
	}
	cout<<minn+maxx<<endl;
}
