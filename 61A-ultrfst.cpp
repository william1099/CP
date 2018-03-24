#include <bits/stdc++.h>

using namespace std;

int main() {
	int i;
	string str,str2;
	cin>>str>>str2;
	for (i=0; i<=str.length()-1; i++) {
		if (str[i]==str2[i]) {
			cout<<"0";
		}
		else {
			cout<<"1";
		}
	}
	printf("\n");
	
}
