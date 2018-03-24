#include <bits/stdc++.h>

using namespace std;

int main() {
	char str[255];
	int pos,i;
	char spasi;
	cin>>str;
	pos=0;
	string mix="";
	for (i=0; i<=strlen(str)-1; ) {
		if (str[i]=='W' && str[i+1]=='U' && str[i+2]=='B') {
			if (pos==0) {
				 spasi=' '; mix=mix+spasi; pos=1;
			}
			i=i+3;
		}
		else {
			mix=mix+str[i];
			i++;
			pos=0;
		}
	}
	cout<<mix<<endl;
}
