#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d\n",&n);
	if (n<=2) {
		printf("NO\n");
	}
	else if ((n % 2)==0) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
}
