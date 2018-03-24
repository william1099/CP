#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,t,a[5001],b[5001],c[5001],ans,x=0,y=0,z=0,i;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>t;
		if (t==1) {
			a[x]=i; x++;
		}
		else if (t==2) {
			b[y]=i; y++;
		}
		else {
			c[z]=i; z++;
		}
	}
	ans=min(x,y);  ans=min(ans,z);
	if (x>0 && y>0 && z>0) {
		cout<<ans<<endl;
	for (i=0; i<=ans-1; i++) {
		cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
	}
	}
	else {
		cout<<"0"<<endl;
	}
}
