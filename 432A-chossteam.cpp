#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k,a,i,count=0;
	cin>>n>>k;
	for (i=1; i<=n; i++) {
		cin>>a;
		if (a+k<=5) {
			count++;
		} 
	}
	cout<<count/3<<endl;
}
