#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,p,i,count[102],a[102],hitung=0,q;
	memset(count,0,102);
	cin>>n>>p;
	for (i=1; i<=p; i++) {
		cin>>a[i];
		count[a[i]]=1;
	}
	cin>>q;
	for (i=1; i<=q; i++) {
		cin>>a[i];
		count[a[i]]=1;
	}
	for (i=1; i<=n; i++) {
		if (count[i]==1) {
			hitung++;
		}
	}
	if (hitung==n) {
		cout<<"I become the guy."<<endl;
	}
	else {
		cout<<"Oh, my keyboard!"<<endl;
	}

	
}
