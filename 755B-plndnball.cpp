#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,m;
    bool x=0;
    string str;
    vector<string> myvec,myvec2;
    cin>>n>>m;
    for (int i=1; i<=n+m; i++) {
        cin>>str;
        if (i<=n) myvec.push_back(str);
        else myvec2.push_back(str);
    }
    for (int i=0; i<=n-1; i++) {
        for (int j=0; j<=m-1; j++) {
            if (myvec[i]==myvec2[j]) x^=1;
        }
    }
    if (myvec.size() + x> myvec2.size()) cout<<"YES\n";
    else cout<<"NO\n";
}
