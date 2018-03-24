#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,t,a[100005],ans,ans2=0;
int main() {
    cin>>n>>t;
    for (int i=1; i<=n; i++) cin>>a[i],a[i]=a[i]+a[i-1];
    for (int i=0; i<=n; i++) {
        int lo=i,hi=n,mid;
        ans=0;
        while (lo<=hi) {
            mid=(lo+hi) >> 1;
            if (a[mid]<=t+a[i]) {
                ans=mid;
                lo=mid+1;
            }
            else hi=mid-1;
        }
        ans2=max(ans2,ans-i);
    }
    cout<<ans2<<"\n";
}
