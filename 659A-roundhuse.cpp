#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a,b;
	cin>>n>>a>>b;
	int sum=a+b;
	if (sum<=n && b>=0 || sum>0 && b<0) cout<<a+b<<endl;
	else if (sum>n && b>0) {
		while (sum>n) {            // bisa diganti dengan sum=a+b%n;  jika b=7 maka mod 6 = 1 (kembali ke 1)
			sum=sum-n;			
		}
		cout<<sum<<endl;
	}
	else if (sum<=0 && b<0) {
		while (sum+n<=n) {
			sum=sum+n;
		}
		cout<<sum<<endl;
	}
}

/*    MATH CONCEPT
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a,b;
	cin>>n>>a>>b;
	b=b%n;
	a=a+b;
	if (a>n) a=a%n;
	else if (a<=0) a=a+n;
	cout<<a<<endl;
}


*/
