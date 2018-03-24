#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,b,d;
	char a;
	cin>>n>>d;
	long long int count=0,sum=d;
	for (long long int i=1; i<=n; i++) {
		cin>>a>>b;
		if (a=='+') sum+=b;
		else if (a=='-' && sum-b>=0) sum-=b;
		else count++;
	}
	cout<<sum<<" "<<count<<endl;
}
