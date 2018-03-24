#include <bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005],q[1000005];
int main() {
    int n,m,x,ans;
    cin>>n;
    a[0]=1; b[-1]=0;
    for (int i=1; i<=n; i++) cin>>x,a[i]=x+a[i-1];
    for (int i=0; i<=n-1; i++) b[i]=a[i+1]-a[i]+b[i-1];
    cin>>m;
    for (int i=1; i<=m; i++) cin>>q[i];
    for (int i=1; i<=m; i++) {
        int lo=0,hi=n-1,mid;
        ans=0;
        while (lo<=hi) {
            mid=(lo+hi) >> 1;
            if  (q[i]>=a[mid] && q[i]<=b[mid]) {
                ans=mid+1;
                lo=mid+1;
            }
            else if (q[i]<b[mid]) hi=mid-1;
            else lo=mid+1;
        }
        q[i]=ans;
    }
    for (int i=1; i<=m; i++) cout<<q[i]<<"\n";
}
