#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main() {
    int n,k,x;
    vector<LL> myvec;
    cin>>n>>k;
    for (int i=1; i<=n; i++) cin>>x,myvec.push_back(x);
    LL ans=myvec[n-1],j=2*k-n;
    for (int i=0; i<=n-j-1; i++) {
        ans=max(ans,myvec[i]+myvec[n-j-1-i]);
    }
    cout<<ans<<"\n";
}
