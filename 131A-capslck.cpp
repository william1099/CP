#include <bits/stdc++.h>

using namespace std;

int main() {
	char str[101];
	int i,count=0;
	scanf("%s",str);
	for (i=0; str[i]; i++) {
		if (str[i]>=97 && str[i]<=122) {       // or str[i]==tolower(str[i])
			count++;
		}
	}
	if (((str[0]>=97 && str[0]<=122) && count==1)) {
		for (i=0; str[i]; i++) {
		str[i+1]=tolower(str[i+1]);
	}
	str[0]=toupper(str[0]);
	cout<<str<<endl;
	}
	else if (count==0) {
		for (i=0; str[i]; i++) {
			str[i]=tolower(str[i]);
		}
		cout<<str<<endl;
	} 
	else {
		cout<<str<<endl;
	}
	return 0;
}
