#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[4];
	cin>>a[1]>>a[2]>>a[3];
	sort(a+1,a+3+1);
	cout<<a[2]-a[1]+a[3]-a[2]<<endl;
}
