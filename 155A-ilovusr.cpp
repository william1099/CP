#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a[1001],max=-1,min=99999,maxx=0,minn=0,i;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>a[i];
		if (a[i]>max) {
			max=a[i];
			maxx++;
		}
		if (a[i]<min) {
			min=a[i];
			minn++;
		}
	}
	cout<<maxx+minn-2<<endl;
}
