#include <bits/stdc++.h>
using namespace std;


bool cek(long long int x) {
	if (x<2) return 0;
	else if (x==2) return 1;
	if(x%2==0) return 0;                     //dibagi 2 supaya yang bawah tidak dibagi kelipatan 2
	for (long long int i=3; i*i<=x; i+=2) {    // dibagi 3 5 7.. agar tidak TLE
		if (x%i==0) {
			return 0;
		}
	}
	return 1;					//jika prima
}

int main() {
	long long int n,a,i;
	cin>>n;
	for (i=1; i<=n; i++) {
		scanf("%I64d",&a);
		long long int sqr=sqrt(a);
		if (sqr*sqr==a && cek(sqr)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
/*   TLE
#include <bits/stdc++.h>
typedef long long int LL;
using namespace std; 
bool cek(LL x) {
	for (int i=3; i*i<=x; i++) {
		if (x<2) return 1;
		if (x==2) return 0;
		if (x%i==0) {
			return 1;
		}
		return 0;
	}
}
int main() {
	long int n,i,count=0,j;
	LL a;
	cin>>n;
	for (i=1; i<=n; i++) {
		scanf("%I64d",&a);
		if (cek) {
		for (j=2; j<=a-1; j++) {
			if (a%j==0) count++;
			if (count>=2) {
				 break;
			}
		}
		if (count==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		count=0;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
}*/
