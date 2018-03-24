#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,a[101],max=-1,count=0,i;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>a[i];
		if (a[i]>max) max=a[i];
	}
	for (i=1; i<=n; i++) {
		count+=max-a[i];
	}
	cout<<count<<endl;
}
