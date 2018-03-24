#include <bits/stdc++.h>

using namespace std;
const int MAXN=1e4;
char a[MAXN];

int main() {
	string str;
	long int i,k,count=0;
	getline(cin,str);			//baca string termasuk spasi
	memset(a,MAXN,0);
	for (i=0; i<=str.length()-1; i++) {	
		if (str[i]==',' || str[i]=='}') {
			k=str[i-1]-'0';
			if (a[k]==0 && k!=75) {   //'a'-'0'=49 'A'-'0'=18
				a[k]++;		  //a[k]==0 memcatat kemunculan 1 kali saja
				count++;
			}
		}
	}
	cout<<count<<endl;
}
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	long int i;
	getline(cin,str);
	set<char> mySet;
	for (i=0; i<=str.length()-1; i++) {
		if (str[i]>=97 && str[i]<=122) {
			mySet.insert(str[i]);
		}
	}
	cout<<mySet.size()<<endl;
	return 0;
}
*/


