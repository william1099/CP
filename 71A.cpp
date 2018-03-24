#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	int n,i;
	string str,content;
	
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>str;
		if (str.size()>10) {
			ostringstream ss;
			ss<< str.size()-2;
			content+=str[0]+ss.str()+str[str.size()-1]+'\n';
		}
		else {
			content+=str+'\n';
		}
	}	
	cout<<content<<endl;
}
