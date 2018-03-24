#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,a[101]={0},x,mx=-1;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>x;
        a[i%3]=a[i%3]+x;
        if (a[i%3]>mx) mx=a[i%3];
    }
    if (a[0]==mx) cout<<"back\n";
    else if (a[1]==mx) cout<<"chest\n";
    else if (a[2]==mx) cout<<"biceps\n";
}
