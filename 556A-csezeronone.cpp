#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,i,st=0,nl=0,ans;
	char str[200005];
	cin>>n>>str;
	for (i=0; i<=n-1; i++) {
		(str[i]=='1') ? st++ : nl++;
	}
	ans=min(st,nl);
	cout<<n-(ans*2)<<endl;
}
