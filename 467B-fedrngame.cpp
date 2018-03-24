#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k,a[1005],m,i,sum=0;
	cin>>n>>m>>k;
	for (i=1; i<=m+1; i++) {
		cin>>a[i];
	}
	for (i=1; i<=m; i++) {
		int count=0;              //wajib letakkan disini /?
		for (int temp=a[i] ^ a[m+1]; temp; temp>>=1) {   //a[i] xor a[m+1] utk membandingkan kedua nilai //temp>>=1 sama dgn temp=temp>>1;  1011 >>1 =0101 >>1=0010 >>1=0001>>1=0000 
			if (temp & 1) {					//temp & 1 (jika ujung binernya 1 maka 1 & 1=1 berarti count++ (utk mencatat bnyknya 1 yg ada di biner)
				count++;
			}
		}
		if (count<=k) {
			sum++;
		}
	}
	cout<<sum<<endl;
}

/* untuk mencatat banyaknya 1 bisa gunakan __builtin_popcount (unsigned int)
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k,a[1005],m,i,sum=0;
	cin>>n>>m>>k;
	for (i=1; i<=m+1; i++) {
		cin>>a[i];
	}
	for (i=1; i<=m; i++) {
		int count=0;
		int temp=a[i]^a[m+1];
		if (__builtin_popcount(temp)<=k) {
			sum++;
		}
	}
	cout<<sum<<endl;
}
*/
