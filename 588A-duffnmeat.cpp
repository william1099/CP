#include <bits/stdc++.h>

using namespace std;
long int a[100001];
int main() {
	long int n,i,min=999999,count=0,p;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>a[i]>>p;
		if (p<min) {
			min=p;
		}
		count=count+a[i]*min;
	}
	cout<<count<<endl;
}
