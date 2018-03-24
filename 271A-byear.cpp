#include <bits/stdc++.h>

using namespace std;

int main() {
	int y,a,b,c,d;
	scanf("%d",&y);
	while(1) {  						//while (1) loop tidak berhenti
		y++;
		a=y/1000;
		b=(y%1000)/100;
		c=((y%1000)%100)/10;
		d=((y%1000)%100)%10;
		if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
			break;
		}
	}
	cout<<y<<endl;
	return 0;
}



/*
#include <bits/stdc++.h>
bool cek(int y);
using namespace std;

int main() {
	bool v=0;
	int y;
	scanf("%d",y);
	while (v) {
		y=y+1;
		v=cek(y);	
	}
	if (!v) {
		cout<<y<<endl;
	}
}
	
bool cek(int y) {
	int n,i,count=0;
	char s[6];
	itoa(y,s,10);
	
	n=strlen(s);
	sort(s,s+n);
	for (i=0; i<=n-2; i++) {
		if (s[i]!=s[i+1]) {
			count++;
		}
	}
	if (count==n) {
		return (1);
	}
	else {
		return (0);
	}
}
*/
