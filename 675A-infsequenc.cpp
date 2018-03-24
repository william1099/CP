#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int a,b,c;
	bool flag=0;
	cin>>a>>b>>c;
	if (a==b) flag=1;
	else if (a<b && c>0 || a>b && c<0) {
		((b-a)%c==0) ? flag=1 : flag=0;
	}
	else flag=0;
	(flag) ? cout<<"YES\n" : cout<<"NO\n";
}
