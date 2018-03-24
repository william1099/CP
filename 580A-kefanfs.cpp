#include <bits/stdc++.h>
#define maxn 100005
using namespace std; 

int main() {
	long int n,i,a[maxn],max=0,count=0;
	cin>>n;
	for(i=0; i<=n-1; i++) {
		cin>>a[i];
	}
	if (n==1) {
		cout<<n<<endl;
	}
	else {
	for (i=1; i<=n-1; i++) {
		if (a[i]>=a[i-1]) {
			count++;
			if (count>max) {
				max=count;
			}
		}
		else {
			count=0;
		}
	}
	cout<<max+1<<endl;
}
}
