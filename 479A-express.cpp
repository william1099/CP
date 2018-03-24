#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,c,max=0,d[10],i;
	cin>>a>>b>>c;
	d[1]=a*b*c;
	d[2]=(a+b)*c;
	d[3]=a*(b+c);
	d[4]=a+b+c;
	for (i=1; i<=4; i++) {   //atau langsung sort (d+1,d+5)
		if (d[i]>max) {
			max=d[i];
		}
	}
	cout<<max<<endl;
}
