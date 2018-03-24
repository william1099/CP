#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i,j;
	bool flag=0,mark=1;
	char str[1005][255];
	cin>>n;
	for (j=1; j<=n; j++) {
		cin>>str[j];
		for (i=0; i<=4; i++) {
			if (str[j][i-1]=='O' && str[j][i]=='O' && mark==1) {
			flag=1;
			str[j][i-1]='+';
			str[j][i]='+';
			mark=0;
			}
		}
	}
	if (flag) {
		cout<<"YES"<<endl;
		for (j=1; j<=n; j++) {
			cout<<str[j]<<endl;
		}
	}
	else {
		cout<<"NO"<<endl;
	}
	
}
