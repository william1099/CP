#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAXN=2e5;
LL n,q,x[MAXN],m[MAXN],ans2[MAXN]={0},ans;
int main() {
    cin>>n;
    for (int i=1; i<=n; i++) cin>>x[i];
    cin>>q;
    for (int i=1; i<=q; i++) cin>>m[i];
    sort(x+1,x+n+1);
    for (int i=1; i<=q; i++) {
        int lo=0,hi=n,mid;
        ans=0;
        while (lo<=hi) {
            mid=(lo+hi) >> 1;
            if (m[i]>=x[mid]) {
                ans=mid;
                lo=mid+1;
            }
            else hi=mid-1;
        }
        ans2[i]=ans;
    }
    for (int i=1; i<=q; i++) cout<<ans2[i]<<"\n";
}
