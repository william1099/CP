#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c,a[101],ans=0;
    cin>>n>>c>>a[1];
    for (int i=2; i<=n; i++) {
        cin>>a[i];
        if (a[i]-a[i-1]<=0) ans=max(ans,abs(a[i]-a[i-1]));
    }
    if (ans-c>=0) cout<<ans-c<<"\n";
    else cout<<0<<"\n";
}
