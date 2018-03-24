#include <bits/stdc++.h>

using namespace std;

int main() {
	int a1,a2,ans1,ans2,count=0;
	cin>>a1>>a2;
	while (a1+a2>2 && a1>0 && a2>0) {
		ans1=max(a1,a2)-2; 
		ans2=min(a1,a2)+1; a2=ans2; a1=ans1;
		count++;
	}
	cout<<count<<endl;
}
