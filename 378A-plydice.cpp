#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,first=0,second=0,draw=0;
	cin>>a>>b;
	for (int i=1; i<=6; i++) {
		if (abs(a-i)>abs(b-i)) second++;
		else if (abs(a-i)<abs(b-i)) first++;
		else draw++;
	}
	cout<<first<<" "<<draw<<" "<<second<<endl;
}
