#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
	LL a[5],count=0,i;
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	sort(a,a+4);
	for (i=0; i<=3; i++) {
		if (a[i]!=a[i+1]) {
			count++;
		}
	}
	cout<<4-count<<endl;
}
