#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m,c,i,count_m=0,count_c=0;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>m>>c;
		(m==c)?  :(m>c)? count_m++ : count_c++; 
	}
	(count_m==count_c)? cout<<"Friendship is magic!^^\n" : (count_m>count_c)? cout<<"Mishka\n" : cout<<"Chris\n";
}
