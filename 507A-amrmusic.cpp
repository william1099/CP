#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,k,a[101],count=0;
	vector<long int> myvector;
	cin>>n>>k;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
		myvector.push_back(a[i]);
	}
	sort(a+1,a+n+1);
	for (int i=1; i<=n; i++) {
		if (k-a[i]>=0) {count++; k=k-a[i];}
		else break;
	}
	cout<<count<<endl;
	for (int i=1; i<=count; i++) {
		for (int j=0; j<=n-1; j++) {
			if (a[i]==myvector[j]) {
				cout<<j+1; myvector[j]=-1; break;
			}
		}
		if (i<=count-1) cout<<" ";
	}
	printf("\n");
}

/* cara kedua 
#include <bits/stdc++.h>

using namespace std;
int a[101],ai[101];
int comp (int x,int y) {
	return a[x] < a[y];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,k,count=0;
	cin>>n>>k;
	for (int i=1; i<=n; i++) {
		cin>>a[i],ai[i]=i;
	}
	sort(ai+1,ai+n+1,comp);
	sort(a+1,a+n+1);
	for (int i=1; i<=n; i++) {
		if (k-a[i]>=0) {count++; k=k-a[i];}
		else break;
	}
	cout<<count<<endl;
	for (int i=1; i<=count; i++) {
		cout<<ai[i]<<" ";
	}
}
*/
