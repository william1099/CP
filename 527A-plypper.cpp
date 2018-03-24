#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int a,b,count=0;
	cin>>a>>b;
	while (a>0 && b>0) {
		if (a>=b) {
			count+=a/b;
			a=a%b;
		}
		else {
			count+=b/a;
			b=b%a;
		}
	}
	cout<<count<<endl;
}
