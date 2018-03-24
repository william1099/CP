#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
using namespace std;
const int MAXN=1e5+5;
long int a[MAXN];
int main() {
	long int n,m,i;
	long long int hasil=0;   //hasil melebihi long int
	cin>>n>>m;
	a[0]=1;
	for (i=1; i<=m; i++) {
		cin>>a[i];
	}
	for (i=1; i<=m; i++) {
		if (a[i]>=a[i-1]) {
			hasil=hasil+a[i]-a[i-1];
		}
		else {
			hasil=hasil+a[i]-a[i-1]+n;
		}
	}
	cout<<hasil<<endl;
}
