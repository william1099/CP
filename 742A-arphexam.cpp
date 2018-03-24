#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n;
	cin>>n;
	while (n>4) {       // atau n%4  case 0 hasilnya diganti jadi 1 dan 8
		n=n-4;
	}
	switch (n) {
		case 0:cout<<1<<endl; break;
		case 1:cout<<8<<endl; break;
		case 2:cout<<4<<endl; break;
		case 3:cout<<2<<endl; break;
		case 4:cout<<6<<endl; break;
	}
}

/* TLE
#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,div,x;
	while (cin>>n) {
	if (n%2==0) div=pow(4,(n/2));
	else {
		div=pow(4,(n/2))*pow(8,(n%2));
	} 
	cout<<div%10<<endl;
}
}
*/
