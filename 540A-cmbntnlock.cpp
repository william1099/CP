#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i;
	long int count=0;
	char str[1001],str2[1001];
	cin>>n;
	cin>>str>>str2;
	for (i=0; i<=n-1; i++) {
		if (abs(str[i]-str2[i])<=5) {
			count=count+abs(str[i]-str2[i]);
		}
		else {
			count=count+10-abs(str[i]-str2[i]);  //10 angka - absnya cth= 1 ke 7 maka jadi 7-8-9-0-1
		}
	}
	cout<<count<<endl;
}
