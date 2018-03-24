#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n,c;
	cin>>n;
	c=1;
	while(n>c*5) {
		n=n-c*5;
		c=c*2;
	}
	ll hasil=(n-1)/c;
	switch (hasil) {
		case 0:cout<<"Sheldon"<<endl; break;
		case 1:cout<<"Leonard"<<endl; break;
		case 2:cout<<"Penny"<<endl; break;
		case 3:cout<<"Rajesh"<<endl; break;
		case 4:cout<<"Howard"<<endl; break;
	}
}

/*
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
	ll n,a,i;
	char nama[5][10]={"Sheldon","Leonard","Penny","Rajesh","Howard"};   
	cin>>n;
	a=1;
	for (i=1; i<=30; i++) {
		if (n>5*a) {
			n=n-5*a;
		}
		else {
			for (int j=0; j<=4; j++) {
				if (n>a) {
					n=n-a;
				}
				else {
					cout<<nama[j];
					break;
				}
			}
			break;
		}
		a=a*2;
	}
	
	
}
*/
