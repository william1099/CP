#include <bits/stdc++.h>

using namespace std;

/*
int main() {
	int n;
	scanf("%d",&n);
	if (n%4==0||n%7==0||n%47==0||n%74==0||n%477==0||n%447==0||n%444==0||n%777==0||n%774==0||n%744==0||n%747==0||n%474==0) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
}
*/

int lucky[]={4,7,47,74,444,447,474,777,747,774};
int i=0;
bool cek(int x) {
	if (x%lucky[i]==0) {
		return 1;
		i++;
	}
	else {
		i++;
		return 0;
	}
}
int main() {
	int n;
	cin>>n;
	if (cek(n)) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}
