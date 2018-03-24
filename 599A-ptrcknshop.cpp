#include <bits/stdc++.h>

using namespace std;

int main() {
	long int a[4];
	cin>>a[1]>>a[2]>>a[3];
	sort(a+1,a+4);
	if ((a[1]+a[2])*2<=a[1]+a[2]+a[3]) {
		cout<<(a[1]+a[2])*2<<endl;
	}
	else {
		cout<<a[1]+a[2]+a[3]<<endl;
	}
}
