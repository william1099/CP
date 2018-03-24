#include <bits/stdc++.h>

using namespace std;
long int m[100005],h[100005];
int main(){
	long int n,count=1,i,max=-1;
	cin>>n;
	for (i=1; i<=n; i++) {
		cin>>h[i]>>m[i];
	}
	h[0]=-1; m[0]=-1;
	for (i=1; i<=n; i++) {
		if (h[i]==h[i-1] && m[i]==m[i-1]) {
			count++;
		}
		else {
			count=1;
		}
		if (count>max) {
			max=count;
		}
	}
	cout<<max<<endl;
}

/* tanpa array 
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, h, m, a, b, cnt=1, ma=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d%d", &h, &m);
        if(i==0) a=h, b=m;
        else {
            if(a==h && b==m) cnt++;
            else {
                a=h, b=m;
                if(cnt>ma) ma=cnt;
                cnt=1;
            }
            if(cnt>ma) ma=cnt;
        }
    }
    printf("%d", ma);
    return 0;
}
*/
