#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,ans=0;
    vector<int> myvec;
    cin>>n;
    for (int i=1; i<=n-1; i++) {
        cin>>a;
        myvec.push_back(a);
    }
    cin>>a>>b;
    for (int i=a-1; i<=b-2; i++) ans=ans+myvec[i];
    cout<<ans<<"\n";
}
