#include <cstdio>
#include <iostream>
int count(char ch);
using namespace std;

int main() {
	char ch;
	int i,j,a[2]={0,0};
	for (i=1; i<=8; i++) {
		for (j=1; j<=8; j++) {
			scanf(" %c",&ch);
			a[ch>=97 && ch<=122]+=count(ch);
		}
	}
	(a[1]==a[0]) ? cout<<"Draw\n" : (a[1]>a[0]) ? cout<<"Black\n" : cout<<"White\n";
}

int count(char ch) {
	if (ch=='Q' || ch=='q') return 9;
	else if (ch=='R' || ch=='r') return 5;
	else if (ch=='B' || ch=='b' || ch=='N' || ch=='n') return 3;
	else if (ch=='P' || ch=='p') return 1;
	else return 0;
}



/*  TOO LONG
#include <bits/stdc++.h>

using namespace std;

int main() {
	char ch;
	int i,j,count=0,count2=0,ans;
	for (i=1; i<=8; i++) {
		for (j=1; j<=8; j++) {
			cin>>ch;
			if (ch<97) {
				if (ch=='Q') {
					count+=9;
				}
				else if (ch=='R') {
					count+=5;
				}
				else if (ch=='N' || ch=='B') {
					count+=3;
				}
				else if (ch=='P'){
					count++;
				}
			}
			else if (ch>=97) {
				if (ch=='q') {
					count2+=9;
				}
				else if (ch=='r') {
					count2+=5;
				}
				else if (ch=='n' || ch=='b') {
					count2+=3;
				}
				else if (ch=='p'){
					count2++;
				}
			}
		}
	}
	(count==count2) ? cout<<"Draw\n" : (count>count2) ? cout<<"White\n" : cout<<"Black\n";
}
*/
