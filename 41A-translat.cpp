#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i,count=0;
	char str[101],str2[101];
	scanf("%s",str);
	scanf("%s",str2);
	n=strlen(str)-1;
	for (i=0; i<=n; i++) {
		if (str[i]==str2[n-i]) {
			count++;
		}
	}
	if (count==n+1) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	
}
