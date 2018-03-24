#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,a[5],sum=0;
	char str[100005];
	cin>>a[1]>>a[2]>>a[3]>>a[4]>>str;
	for (int i=0; i<=strlen(str)-1; i++) {
		sum+=a[str[i]-'0'];
	}
		cout<<sum<<endl;
	/*  TLE
	for (int i=0; i<=strlen(str)-1; i++) {
		count[str[i]-'0']++;
	}
	for (int i=1; i<=4; i++) {
		sum+=count[i]*a[i];
	}
	*/
}
