#include <bits/stdc++.h>

using namespace std;

int main() {
	char str[101];
	int i,j=1,a[101],max=-1,d;
	cin>>str;
	for (i=0; i<=strlen(str)-1; i++) {
		if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y') {
			a[j]=i+1; j++; 
		}
	}
	a[0]=0; a[j]=strlen(str)+1;
	for (i=1; i<=j; i++) {
		d=a[i]-a[i-1];
		if (d>max) max=d;
	}
	cout<<max<<endl;
}
