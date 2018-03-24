#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
int main() {
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
    int n,c[MAXN],ans2=999999999;
    cin>>n;
    for (int i=1; i<=n; i++) cin>>c[i];
    sort(c+1,c+n+1);
    for (int i=1; i<=n; i++) {
        int ans=0;
        for (int j=i,k=n; j<=k;) {
            int mid=(j+k)/2;
            if (c[i]*2>=c[mid]) {
                j=mid+1;
                ans=mid;
            }
            else {
                k=mid-1;
            }
        }
        ans2=min(ans2,n-(ans-i+1));
    }
    cout<<ans2<<"\n";
}
    /*
    if (c[1]*2>=c[n]) return cout<<0<<"\n",0;
    int lo=0,hi=n,mid,ans;
    while (lo<=hi) {
        mid=(lo+hi)/2;
        if (c[1]*2>=c[mid]) {
            lo=mid+1;
            ans=mid;
        }
        else hi=mid-1;
    }
   ans=min(ans,n-ans);
   cout<<ans<<"\n";
}
*/
