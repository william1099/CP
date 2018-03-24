#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,a[200005],minn,maxx;
	cin>>n;
	for (long long int i=1; i<=n; i++) {
		cin>>a[i];
	}
	a[n+1]=-1000000009;      //atau gak usah dengan cek dari i=1 to i<=n-1
	for (long long int i=1; i<=n; i++) {
		if (i==1) {
			cout<<abs(a[i]-a[i+1])<<" "<<abs(a[i]-a[n])<<endl;
		}
		else {
			minn=min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));  //
			maxx=max(abs(a[i]-a[1]),abs(a[i]-a[n]));
			cout<<minn<<" "<<maxx<<endl;
		}
	}
	
}

/*  cek min max
int min = city[i + 1] - city[i];
int max = city[n] - city[i];
if (city[i] - city[i - 1] < min)
min = city[i] - city[i - 1];
if (city[i] - city[1] > max)
max = city[i] - city[1];
                */
