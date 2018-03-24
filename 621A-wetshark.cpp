#include <bits/stdc++.h>

using namespace std;
long long int a[100005];
int main() {
	long int n,j=1;
	long long int sum=0;
	cin>>n;
	for (long int i=1; i<=n; i++) {
		cin>>a[i]; 
		sum+=a[i];
	}
	sort(a+1,a+n+1);
	while (sum%2!=0) {
		if (a[j]%2==1) sum=sum-a[j];
		else j++;
	}
	cout<<sum<<endl;
}
