#include <bits/stdc++.h>
using namespace std;
long int n,a[100005];
int main() {
    cin>>n>>a[1];
    for (int i=2; i<=n; i++) {
        cin>>a[i];
        cout<<a[i]+a[i-1]<<" ";
    }
    cout<<a[n]<<"\n";
}
