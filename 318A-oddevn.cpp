#include <bits/stdc++.h>
 using namespace std;
 
 int main() {
	long long n,k,hasil,jwb;
	cin>>n>>k;
	if (n%2==0) {
		hasil=n/2;
	}
	else {
		hasil=n/2+1;
	}
	if (k<=hasil) {
		jwb=k*2-1;
	}
	else {
		jwb=(k-hasil)*2;
	}
	cout<<jwb<<endl;
 }







/*too large for array
typedef long long LL;
typedef double DB;
using namespace std;
const LL MAX=1e12;
LL a[MAX];

int main() {
	LL n,k,j=1,x,i;
	cin>>n>>k;
	x=floor(((float) n/2)+1.5);
	for (i=1; i<=n; i++) {
		if (i % 2==1) {
			a[j]=i;
			j++;
		}
		else {
			a[x]=i;
			x++;
		}
	}
	cout<<a[k]<<endl;
	return 0;
}  */
