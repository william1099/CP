#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,ans;
    cin>>n;
    ans=n*n;
    for (int i=1; i<=n*n/2; i++) {
        cout<<i<<" "<<ans<<"\n"; ans--;
    }
}
