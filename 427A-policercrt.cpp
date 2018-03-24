#include <bits/stdc++.h>

using namespace std;
int a[100001];
int main() {
	long int n,i,count=0;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>a[i];
	}
	for (i=n; i>=1; i--) {
		count=count+a[i];
		if (count>=0) {
			count=0;
		}
	}
	(count<0)? cout<<abs(count)<<endl : cout<<"0"<<endl;
}

/*   dari depan
#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,count=0,notrt=0;
	cin>>n;
	while (n>0) {
		cin>>v;
		if (v>=0) {
			count=count+v;
		}
		else {
			if (count>0) {
				count=count+v; //count--;
			}
			else {
				notrt++;  
			}
		}
	}
	cout<<notrt<<endl;
}
*/
