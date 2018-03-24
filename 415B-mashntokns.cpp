#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,a,b,x[100005];
/*
int main() {
    cin>>n>>a>>b;
    for (int i=1; i<=n; i++) cin>>x[i];
    for (int i=1; i<=n; i++) {
        LL mx=(x[i]*a)/b;
        LL lo=0,hi=x[i],mid;
        while (lo<=hi) {
            mid=(lo+hi)>>1;
            if ((mid*a)/b < mx) lo=mid+1;
            else hi=mid-1;
        }
        x[i]=x[i]-lo;
    }
    for (int i=1; i<=n; i++) cout<<x[i]<<" ";
}
*/
int main() {
    cin>>n>>a>>b;
    for (int i=1; i<=n; i++) cin>>x[i];
    for (int i=1; i<=n; i++) cout<<((x[i]*a)%b)/a<<" ";
}
