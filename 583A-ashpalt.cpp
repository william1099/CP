#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a[2501],b[2501],j=2,counta[2505]={0},countb[2505]={0};
	cin>>n;
	for (int i=1; i<=n*n; i++) {
		cin>>a[i]>>b[i];
	}
	 counta[a[1]]=1; countb[b[1]]=1;
	for (int i=2; i<=n*n; i++) {
		if (counta[a[i]]==0 && countb[b[i]]==0) {
			counta[a[i]]=1; countb[b[i]]=1;	
			a[j]=i; j++;
		}
	}
	a[1]=1;
	for (int i=1; i<=j-1; i++) {
		cout<<a[i];
		if (i<=j-2) cout<<" ";
	}
	printf("\n");
}
