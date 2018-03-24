#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,d,count=0,ans=-1;
	string str;
	cin>>n>>d;
	for (int i=1; i<=d; i++) {
		cin>>str;
		int found=str.find("0");
		if (found!=string::npos) count++;
		else count=0;
		ans=max(ans,count);
	}
	cout<<ans<<endl;
}
