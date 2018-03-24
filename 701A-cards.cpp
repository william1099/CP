#include <bits/stdc++.h>
using namespace std;

const double PI = 2*acos(0.0);
const double MINN = 1e-9;
const int MAXN = 1e9;
const long long mod = 1000000007;

int main() {
	int n,a[101],sum=0;;
	bool flag[101]={0};
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
		sum+=a[i];
	}
	sum=sum/(n/2);
	for (int i=1; i<=n; i++) {
		for (int j=i+1; j<=n; j++) {
			if (a[i]+a[j]==sum && !flag[i] && !flag[j] ) {
				cout<<i<<" "<<j<<endl;
				flag[i]=1; flag[j]=1;
				break;
			}
		}
	}
}
