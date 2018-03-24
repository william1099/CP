#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x,a;
    long int sum=0;
    cin>>n>>x;
    for (int i=1; i<=n; i++) {
        cin>>a;
        sum+=a;
    }
    sum=(abs(sum)+x-1)/abs(x);
    cout<<sum<<"\n";
}
