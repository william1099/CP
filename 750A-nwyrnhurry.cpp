#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k,i,count=0,sum=0,nilai;
	cin>>n>>k;
	for (i=1,nilai=240-k; i<=n; i++) {
		count=count+i*5;
		if (count<=nilai) {
			sum++;
		}
	}
	cout<<sum<<endl;
}
