#include <bits/stdc++.h>

using namespace std;

int main() {
	char str[101];
	int countb=0,countk=0,i;
	cin>>str;
	for (i=0; i<=strlen(str)-1; i++) {
		if (str[i]>=97) {
			countk++;
		}
		else {
			countb++;
		}
	}
	for (i=0; i<=strlen(str)-1; i++) {
		if (countk>=countb) {
			str[i]=tolower(str[i]);
			cout<<str[i];
		}
		else {
			str[i]=toupper(str[i]);
			cout<<str[i];
		}
	}
	printf("\n");
}
