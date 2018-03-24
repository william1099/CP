#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i,x=0,y=0,z=0,a,b,c;
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		scanf("%d %d %d",&a,&b,&c);
		x=x+a; y=y+b; z=z+c;
	}
	if (x==0 && y==0 && z==0) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}
