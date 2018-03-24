#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i;
	float p[101],count=0;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>p[i];
		p[i]=p[i]/100;
		count=count+p[i];
	}
	cout<<((float)count/n)*100<<endl;
}
