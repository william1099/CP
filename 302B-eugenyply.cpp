#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,m[100005],a[100005],c,t,mm;
int main() {
    cin>>n>>mm;
    a[0]=0;
    for (int i=1; i<=n; i++) {
        cin>>c>>t;
        a[i]=c*t+a[i-1];
    }
    for (int i=1; i<=mm; i++) cin>>m[i];
    for (int i=1; i<=mm; i++) {
        int lo=1,hi=n,mid,ans;
        if (m[i]<=a[1]) { m[i]=1; continue; }
        while (lo<=hi) {
            mid=(lo+hi) >>1;
            if (m[i]>a[mid]) {
                lo=mid+1;
                ans=mid+1;
            }
            else hi=mid-1;
        }
        m[i]=ans;
    }
    for (int i=1; i<=mm; i++) cout<<m[i]<<"\n";
}
