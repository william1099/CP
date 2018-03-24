#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;
LL sum(LL x) {
    int sum=0;
    while (x) {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main() {
    LL n,ans=-1,x,x1,x2;
    cin>>n;                                  //(n-x2)x berarti maksimum x adalah 10e9 karena 10e9^2=10e18
    for (int i=0; i<=81; i++) {             //n=10e9   max x=10e9 maka 10e9-1 = 999999999 jika dijumlahkan sum max=9*9=81 (9+9+9...)
        LL root=sqrt(i*i-4*(-n));
        x1=(-i+root)/2; x2=(-i-root)/2;
        if (x1<0) x=x2;
        else x=x1;
        if (x*x+sum(x)*x-n==0) {
            ans=x; break;
        }
    }
    cout<<ans<<"\n";
}
