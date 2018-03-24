#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,a,k;
    set<int> myset;
    cin>>n>>m;
    for (int i=1; i<=m; i++) {
        cin>>k;
        bool flag=1;
        for (int j=1; j<=k; j++) {
            cin>>a;
            myset.insert(a);
            if (myset.count(-a)) flag=0;
        }
        if (flag) {cout<<"YES\n"; return 0;}
        myset.clear();
    }
    cout<<"NO\n";
}
