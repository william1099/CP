#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a[1001],count[1001]={0},cnt[1001]={0},max=-1,sum=0;
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
		count[a[i]]++;
	}
	for (int i=1; i<=n; i++) {
		if (cnt[a[i]]==0) {
			sum++;
			cnt[a[i]]=1;
		}
		if (count[a[i]]>max) max=count[a[i]];
	}
	cout<<max<<" "<<sum<<endl;
}

