#include <bits/stdc++.h>

using namespace std;

int a[100002];
int main() {
	long int n,i,taxi,k,j,temp;
	cin>>n;
	for (i=0; i<=n-1; i++) {
		cin>>a[i];
	}
	for (i=0; i<=n-2; i++) {
		for (j=0; j<=n-i-1; j++) {
			if (a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		} 
	}
	 
	i=sizeof(a)-1;
	k=0;
	while(k!=i) {
		if (a[k]+a[i]<=4) {
			a[i]=a[i]+a[k];
			k++;
		}
		else {
			i--;
			taxi++;
		}
	}
	taxi=taxi+1;
	cout<<taxi<<endl;
}
