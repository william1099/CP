#include <bits/stdc++.h>

using namespace std;

int main() {
	int m,n;
	cin>>n>>m;
	if (n%2==1 && m%2==1) {             //ganjil-ganjil
		cout<<"Akshat"<<endl;
	}
	else if (n%2==1 && m%2==0) {        //ganjil genap
		if (n>m) {
			cout<<"Malvika"<<endl;
		}
		else {
			cout<<"Akshat"<<endl;
		}
	}
	else if (n%2==0 && m%2==1) {
		if (n<m) {
			cout<<"Malvika"<<endl;
		}
		else {
			cout<<"Akshat"<<endl;
		}
	}
	else {
		cout<<"Malvika"<<endl;
	}
}
