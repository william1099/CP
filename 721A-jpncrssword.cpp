#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,sum=0,count=0,a[101],j=1,i;
	memset(a,0,101);
	char str[101];
	cin>>n;
	cin>>str;
	for (i=0; i<=strlen(str)-1; i++) {
		if (str[i]=='B') {
			count++;
			if (str[i+1]!='B') {
				a[j]=count; j++;
				count=0; sum++;
			}
		}
	}
	cout<<sum<<endl;
	for (i=1; i<=sum; i++) {
		if (a[i]>0) cout<<a[i];
		if (i<sum) cout<<" ";
	}
	printf("\n");
}
