#include <bits/stdc++.h>

using namespace std;

int main() {
	int r,c,cnt=0;
	char a;
	cin>>r>>c;
	vector <int> vec;
	vector <int> vec2;
	for (int i=1; i<=r; i++) {
		for (int j=1; j<=c; j++) {
			cin>>a;
			if (a=='S') {vec.push_back(i); vec2.push_back(j);} 
		}
	}
	for (int i=1; i<=r; i++) {
		for (int j=1; j<=c; j++) {
			if (count(vec.begin(),vec.end(),i) >0 && count(vec2.begin(),vec2.end(),j) >0) cnt++;
		}
	}
	cout<<r*c - cnt<<endl;
}
/*   MANUAL
int main() {
	int r,c,eat=0,i,j;
	char a[101][101];
	bool flag;
	cin>>r>>c;
	for (int i=1; i<=r; i++) {
		for (int j=1; j<=c; j++) {
			cin>>a[i][j];
		}
	}
	for (int i=1; i<=r; i++) {
		flag=1;
		for (int j=1; j<=c; j++) {
			if (a[i][j]=='S') flag=0;
		}
		if (flag) {
			for (int j=1; j<=c; j++) {
				a[i][j]='*';
				eat++;
			}
		}
	}
	for (int j=1; j<=c; j++) {
		flag=1;	
		for (int i=1; i<=r; i++) {
			if (a[i][j]=='S') flag=0;
		}
		if (flag) {
			for (int i=1; i<=r; i++) {
				if (a[i][j]!='*') {
					eat++;
					a[i][j]='*';
				}
			}
		}
	}
	cout<<eat<<endl;
}
*/
