#include <bits/stdc++.h>

using namespace std;

int main() {
	int m,n,count=0;
	cin>>m>>n;
	for (int i=0; i<=sqrt(1000); i++) {
		if ((n-i*i)>=0 && (m-pow((n-i*i),2)==i)) count++;
	}
	cout<<count<<endl;
}
