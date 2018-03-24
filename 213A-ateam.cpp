#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i,a,b,c,count=0,countans=0;
	scanf("%d\n",&n);
	for (i=1; i<=n; i++) {
		scanf("%d %d %d",&a,&b,&c);
		count=0;
		count=a+b+c;
	
		if (count>1) {
			countans=countans+1;
		}
	}
	printf("%d\n",countans);
	
}
/*  or , short way
int main() {
	int n,i,a,b,c,countans=0;
	scanf("%d\n",&n);
	for (i=1; i<=n; i++) {
		scanf("%d %d %d",&a,&b,&c);
		if (a+b+c>1) {
			countans=countans+1;
		}
	}
	printf("%d\n",countans);
}
*/
