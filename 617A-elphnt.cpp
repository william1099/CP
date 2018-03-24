#include <bits/stdc++.h>

using namespace std;

int main() {
	long int x,count=1;
	cin>>x;
	while (x>5) {
		x=x-5;
		count=count+1;
	}
	cout<<count<<endl;
}
