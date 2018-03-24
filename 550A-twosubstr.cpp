#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin>>str;
	int ab=str.find("AB"),ba=str.rfind("BA");
	int rab=str.find("BA"),rba=str.rfind("AB");
	if ((ab==-1 || ba==-1)) cout<<"NO\n";
	else if (max(abs(ab-ba),abs(rab-rba))==1) cout<<"NO\n";
	else cout<<"YES\n";
}



/*  TANPA FOR


#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin>>str;
	int found=str.find("AB");
	if (found!=string::npos) {
		str.replace(found,2,"..");
		if (str.find("BA")!=string::npos) {
			cout<<"YES\n";
			return 0;
		}
		else {
			str.replace(found,2,"AB");
		}
	}
	int found2=str.find("BA");
	if (found2!=string::npos) {
		str.replace(found,2,"..");
		if (str.find("AB")!=string::npos) {
			cout<<"YES\n";
			return 0;
		}
		else {
			cout<<"NO\n";
		}
	}
}




/*  LONG WAY
#include <bits/stdc++.h>

using namespace std;

int main() {
	char str[100005];
	bool flag=1;
	cin>>str;
	for (int i=0; i<=strlen(str)-1; i++) {
		if (!flag) break;
		if (str[i]=='A' && str[i+1]=='B') {
			for (int j=i+2; j<=strlen(str)-1; j++) {
				if (str[j]=='B' && str[j+1]=='A') {
					cout<<"YES\n";
					return 0;
				}
			}
			flag=0;
		}
	}
	flag=1;
	for (int i=0; i<=strlen(str)-1; i++) {
		if (!flag) break;
		if (str[i]=='B' && str[i+1]=='A') {
			for (int j=i+2; j<=strlen(str)-1; j++) {
				if (str[j]=='A' && str[j+1]=='B') {
					cout<<"YES\n";
					return 0;
				}
			}
			flag=0;
		}
	}
	cout<<"NO\n";
	return 0;
}
*/
