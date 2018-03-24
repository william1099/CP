#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL a,b,n,ans1,ans2,tempb,mx=1e18;
bool flag=0;
int cek(LL x) {
    n=n*6;
    if (a>b) swap(a,b),flag=1;
    for (int i=a; i<=sqrt(n); i++) {
        tempb=n/i;
        if (tempb * i < n) tempb++;
        if (tempb<b) continue;
        if (tempb * i< mx) {
            mx=tempb * i;
            ans1=i; ans2=tempb;
        }
    }
    if (flag) swap(ans1,ans2);
    cout<<ans1*ans2<<"\n";
    cout<<ans1<<" "<<ans2<<"\n";
}

int main() {
    cin>>n>>a>>b;
    if (a*b>=n*6) return cout<<a*b<<"\n",cout<<a<<" "<<b<<"\n",0;
    cek(n);
}
