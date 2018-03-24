#include <bits/stdc++.h>

using namespace std;

int main() {
	string str,find_me="1111111",find_me2="0000000";
	cin>>str;
	size_t found=str.find(find_me);
	size_t found2=str.find(find_me2);
	if ((found !=  string::npos) || (found2 != string::npos)) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}
