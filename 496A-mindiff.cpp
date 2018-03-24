#include <bits/stdc++.h>
using namespace std;
int main() {
    long int n,a[101],x=2,d=0,ans=1001,temp;
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int j=1; j<=n-2; j++) {
         for (int i=2; i<=n; i++) {
            if (i==x) {temp=a[i]; a[i]=a[i-1];}
            d=max(d,a[i]-a[i-1]);
         }
         x++;
         ans=min(ans,d); d=0; a[x-1]=temp;
    }
   cout<<ans<<"\n";
}
/* SHORT WAY
int main () {
    long int n,a[101];
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=2; i<=n; i++) mx=max(mx,a[i]-a[i-1]);
    for (int i=2; i<=n-1; i++) ans=min(ans,max(mx,a[i+1]-a[i-1]));
    cout<<ans<<"\n";
}
*/
