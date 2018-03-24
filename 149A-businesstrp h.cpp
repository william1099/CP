#include <bits/stdc++.h>

using namespace std;

int main() {
	int k,i,a[13],sum=0;
	cin>>k;
	for (i=1; i<=12; i++) {
		cin>>a[i];
	}
	sort(a+1,a+13);
	for (i=12; i>=1; i--) {
		if (k>0) {
			k=k-a[i];	
			sum++;
		}
	}
	(k<=0) ? cout<<sum<<endl : cout<<"-1"<<endl; 
}
