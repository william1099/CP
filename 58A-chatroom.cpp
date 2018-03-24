#include <bits/stdc++.h>

using namespace std;

int main() {
	int i,a=0,count=0;
	string str,str2="hello";
	cin>>str;
	for (i=0; i<=str.length()-1; i++) {
		if (str[i]==str2[a]) {
			count++;
			a++;
		}
	}
	if (count==5) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}
