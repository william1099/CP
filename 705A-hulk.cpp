#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i;
	string str="I hate it",odd="that I hate ",even="that I love ";
	cin>>n;
	if (n>1) {
	for (i=2; i<=n; i++) {
		size_t found=str.find("it");
		if (i%2==0) {
			str.insert(found,even);
		}
		else {
			str.insert(found,odd);
		}
	}
	}
	cout<<str<<endl;
}

/*    short way
int main() {
	int n,i;
	cin>>n;
	for (i=1; i<=n; i++) {
		if (i%2==0) {
			cout<<"I love ";
		}	
		else {
			cout<<"I hate ";
		}
		if (i==n) {
			cout<<"it"<<endl;
		}
		else {
			cout<<"that "<<endl;
		}
	}
}
*/
