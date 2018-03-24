#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,a[100005],sum=25,d=0,count[101]={0};
	cin>>n;
	cin>>a[1]; count[25]++;
	if (a[1]==25) {
		for (int i=2; i<=n; i++) {
		cin>>a[i]; count[a[i]]++;
		d=25-a[i]+sum;
		if (a[i]==50) count[25]--;
		else if (a[i]==100) {
			if (count[50]==0) {
				count[25]-=3;
			}
			else {
				count[25]--; count[50]--;
			}
		}
			if (d<0 || count[25]<0) {
				cout<<"NO"<<endl;
				return 0;
			}
			sum=d+a[i];
		}
		cout<<"YES"<<endl;
		return 0;
	}
	else cout<<"NO"<<endl;
}

/*  cara 2 lebih pendek
#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,a[100005],count[101]={0};
	cin>>n;
	cin>>a[1]; count[25]++;
	if (a[1]==25) {
		for (int i=2; i<=n; i++) {
		cin>>a[i]; count[a[i]]++;
		if (a[i]==50) count[25]--;
		else if (a[i]==100) {
			if (count[50]==0) count[25]-=3;
			else {
				count[25]--; count[50]--;
			}
		}
			if (count[25]<0) {
				cout<<"NO"<<endl;
				return 0;
			}
		}
		cout<<"YES"<<endl;
		return 0;
	}
	else cout<<"NO"<<endl;
}
*/
