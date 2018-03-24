#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    a/=1; b/=2; c/=4;
    int ans=min(min(a,b),c);
    cout<<ans*7<<"\n";
}
