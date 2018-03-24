#include <bits/stdc++.h>
bool cek(char c);

using namespace std;

int main() {
	char str[101];
	int i;
	bool c;	
	scanf("%s",str);
	for (i=0; str[i]; i++) {
		c=cek(str[i]);
		if (c) {
			cout<<"YES"<<endl;
			break;
		}
	}
	if (!c) {
		cout<<"NO"<<endl;
	}
	
	return 0;
}

bool cek(char c) {
	return (c=='H' || c=='Q' || c=='9');
}
