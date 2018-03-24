#include <bits/stdc++.h>
#define RESET(a,b) memset(a,b,sizeof(a))
using namespace std;

int main() {
    long int n;
    cin>>n;
    for (int i=1; i<=n; i++) cout<<100000+i<<" ";
}
/*    the 1231th number are divisible by 1 th number
int main() {
    long int n,cnt=0;
    bool prime[2000000];
    RESET(prime,true);
    cin>>n;
    for (int i=2; i<=10000; i++) {
        if (prime[i]==1) {
            for (int j=2*i; j<=10000; j+=i) prime[j]=false;
        }
    }
    for (int i=2; i<=1000000; i++) {
        if (cnt!=n) {
        if (prime[i]==1) {cout<<i<<" "; cnt++;}
        }
    }
    printf("\n");
}  */
