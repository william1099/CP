#include <bits/stdc++.h>

using namespace std;

int main() {
	char str[101];
	int n,i,count=0;
	cin>>n;
	scanf("%s",&str);
	for (i=0; i<=strlen(str)-1; i++) {
		str[i]=tolower(str[i]);
	}
	sort(str,str+strlen(str));
	for (i=0; i<=strlen(str)-1; i++) {
		if (str[i]!=str[i+1]) {
			count++;
		}
	}
	if (count==26) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}
