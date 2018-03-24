#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,n;
    bool flag=0;
    char str[101];
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>str>>b>>a;
        if (b>=2400 && a>b) flag=1;
    }
    cout<<((flag) ? "YES\n" : "NO\n");
}
