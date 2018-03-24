#include <bits/stdc++.h>
using namespace std;

int main() {
    long int n,k,f,t,mx=-99999999999;
    cin>>n>>k;
    for (int i=1; i<=n; i++) {
        cin>>f>>t;
        if (t<=k && f>mx) mx=f;
        else if (t>k && f-(t-k)>mx) mx=f-(t-k);
    }
    cout<<mx<<"\n";
}

