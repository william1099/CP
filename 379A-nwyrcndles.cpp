#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,sisa,bagi;
	long int jumlah;
	cin>>a>>b;
	jumlah=a;
	while (a>=b) {
		bagi=a/b;
		sisa=a%b;
		jumlah=jumlah+bagi;
		a=bagi+sisa;
	}
	cout<<jumlah<<endl;
}
