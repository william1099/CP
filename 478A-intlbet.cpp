#include <bits/stdc++.h>

using namespace std;

int main() {
	int c1,c2,c3,c4,c5,i,ans,c11,c22,c33,c44,c55;
	bool flag=0;
	scanf("%d %d %d %d %d",&c1,&c2,&c3,&c4,&c5);
	for (i=1; i<=100; i++) {
		if ((c1+c2+c3+c4+c5)%i==0) {
			c11=i-c1; c22=i-c2; c33=i-c3; c44=i-c4; c55=i-c5;
			if (c11+c22+c33+c44+c55==0) {
				flag=1; ans=i;
				break;
			}
			
		}
	}
	if (flag) {
		cout<<ans<<endl;
	}
	else {
		cout<<"-1"<<endl;
	}
}
