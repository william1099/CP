#include <bits/stdc++.h>

using namespace std;
long long int a[200005];
int main(){
	long long int n,x,i,max=-1,min=1000000009,count_max=0,count_min=0,count=0;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>a[i];
		if (a[i]>max) max=a[i];
		if (a[i]<min) min=a[i];
	}
	for (i=1; i<=n; i++) {
		if (a[i]==max) count_max++;
		else if (a[i]==min) count_min++;
	}	
	if (max!=min) {
		cout<<max-min<<" "<<count_max*count_min<<endl;
	}
	else if (max==min) {
		for (i=1; i<=count_max-1; i++) {
			count+=i;
		}
		cout<<max-min<<" "<<count<<endl;
	}
}
