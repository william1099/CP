#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[4],b[4],n;
	bool flag;
	scanf("%d %d %d",&a[1],&a[2],&a[3]);
	scanf("%d %d %d",&b[1],&b[2],&b[3]);
	scanf("%d",&n);
	((a[1]+a[2]+a[3]+4)/5) + ((b[1]+b[2]+b[3]+9)/10)<=n? flag=1:flag=0;
	if (flag) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}


/*  if count_a=0 and count_b=0 output wrong / error
#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[4],b[4],n,i,count_a=0,j,count_b=0,sum=0;
	for (i=1; i<=3; i++) {
		cin>>a[i];
		count_a=count_a+a[i];
	}
	for (j=1; j<=3; j++) {
		cin>>b[i];
		count_b=count_b+b[j];
	}
	cin>>n;
	while (n>0) {
		count_a=count_a-5; sum++;    //atau bagi 5 trus +1
		if (count_a<0) {
			sum++;
			break;
		}
		else if (count_a==0) {
			break;
		}
		count_b=count_b-10; sum++;   // atau bagi 10 trus +1
		if (count_b<0) {
			sum++;
			break;
		}
		else if (count_b==0) {
			break;
		}
	}

	if (sum<=n) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	cout<<sum<<" "<<count_a<<" "<<count_b<<endl;
}
*/
