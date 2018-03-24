#include <bits/stdc++.h>

using namespace std;

int main() {
	int k,r,i;
	long int ans;
	cin>>k>>r;
		for (i=1; i<=10; i++) {
			ans=k*i;
			if (ans%10==0 || ans%10==r) {
				cout<<i<<endl;
				break;
			}
		}
	}
