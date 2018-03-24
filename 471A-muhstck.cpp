#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[11],count=1,cnt=0;
	for (int i=1; i<=6; i++) {
		cin>>a[i];
	}
	sort(a+1,a+7); a[0]=0;
	for (int i=1; i<=6; i++) {
		if (a[i]==a[i-1]) count++;
	}
	for (int i=1; i<=6; i++) {
		if (a[4]!=a[i]) cnt++;
	}
	if (count==4 && cnt==2) cout<<"Bear\n";
	else if (count==6) cout<<"Elephant\n";
	else if (count==5) {
		if (cnt==1) cout<<"Bear\n";
		else if (cnt==2) cout<<"Elephant\n";
		else cout<<"Alien\n";
	} 
	else cout<<"Alien\n";
}
