#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,c,a=0,b,count=0,i;
	cin>>n>>c;
	for (i=1; i<=n; i++) {
		cin>>b;
		if (b-a<=c) {
			count++;
		}
		else {
			count=1;
		}
		a=b;
	}
	cout<<count<<endl;
}
