#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,a,b,v;
	bool flag=1;
	vector<long int> vec (0);
	cin>>n>>v;
	for (long int i=1; i<=n; i++) {
		cin>>a;
		for (long int j=1; j<=a; j++) {
			cin>>b;
			if (v>b && flag==1) {vec.push_back(i); flag=0;}
		}
		flag=1;
	}
	sort(vec.begin(),vec.end());
	if (vec.size()<=0) cout<<vec.size()<<endl;
	else {
		cout<<vec.size()<<endl;
		for (long int i=0; i<=vec.size()-1; i++) cout<<vec[i]<<" ";
		printf("\n");
	}
}
