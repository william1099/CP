#include <bits/stdc++.h>

using namespace std;

int main() {
	char str[101];
	cin>>str;
	int sum=min(abs(str[0]-'a') , 26-abs(str[0]-'a'));
	for (int i=1; i<=strlen(str)-1; i++) {
		sum+=min(abs(str[i]-str[i-1]) , 26-abs(str[i]-str[i-1]));
	}
	cout<<sum<<endl;
}
