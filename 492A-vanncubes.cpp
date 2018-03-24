#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a[10001],i;
	long int sum=0,count=0;
	cin>>n;
	for (i=1; i<=n; i++) {
		count=count+i;
		a[i]=count;
	}
	count=1;
	for (i=1; i<=n; i++) {
		if (count<=n) {
			sum++;
			count=count+a[i+1];
		}
		else {
			break;
		}
	}
	cout<<sum<<endl;
}
