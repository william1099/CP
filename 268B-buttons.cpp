#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long n,i=0,count=0;
	cin>>n;
	while (n>0) {
		count=count+n+(n-1)*i;   // count=(((n-1)*n*(n+1))/6)+n;
		i++;
		n--;
	}
	cout<<count<<endl;
}
