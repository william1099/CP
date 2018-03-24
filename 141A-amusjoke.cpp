#include <bits/stdc++.h>

using namespace std;

int main() {
	bool flag=1;
	char str[101],str2[101],str3[101];
	int first[60]={0},second[60]={0},third[60]={0};
	int i,k;
	cin>>str>>str2>>str3;
	for (i=0; i<=strlen(str)-1; i++) {
		k=str[i]-'0';
		first[k]++;
	}
	for (i=0; i<=strlen(str2)-1; i++) {
		k=str2[i]-'0';
		second[k]++;
	}
	for (i=0; i<=strlen(str3)-1; i++) {
		k=str3[i]-'0';
		third[k]++;
	}
	for (i=17; i<=42; i++) {
		if (second[i]+first[i]!=third[i]) {
			flag=0;
			break;
		}
	}
	if (flag) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}



/*  FAIL
#include <bits/stdc++.h>

using namespace std;

int main() {
	int x;
	string str,str2,str3;
	cin>>str>>str2>>str3;
	sort(str.begin(),str.end()); sort(str2.begin(),str2.end()); sort(str3.begin(),str3.end());
	x=str3.find(str);
	str3.erase(x,str.length());
	x=str3.find(str2);
	str3.erase(x,str2.length());
	if (str3[0]=='\0') {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	 OUTPUT
	A A N S T
A C L S U
A A A C L L N S S T U
	
}
*/
