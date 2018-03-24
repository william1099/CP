#include <bits/stdc++.h>

using namespace std;

int main() {
	long int a,b,s;
	cin>>a>>b>>s;
	if (abs(a)+abs(b)==s) {
		cout<<"Yes"<<endl;
	}
	else if (abs(a)+abs(b)<s) {
		s=s-(abs(a)+abs(b));
		if (s%2==0) {
			cout<<"Yes"<<endl;
		}
		else {
			cout<<"No"<<endl;
		}
	}
	else {
		cout<<"No"<<endl;
	}
}
