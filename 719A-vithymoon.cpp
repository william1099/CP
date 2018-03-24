#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a[101];
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
	}
	a[0]=a[1];
	if (a[n]-a[n-1]>0 && a[n]!=15 || a[n]==0) cout<<"UP"<<endl;
	else if (a[n]-a[n-1]<0 || a[n]==15) cout<<"DOWN"<<endl;
	else cout<<"-1"<<endl;
}
