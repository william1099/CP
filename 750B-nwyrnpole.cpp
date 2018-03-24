#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,cur=0,inf=-2e4;
    string str;
    cin>>n;
    while (n--) {
        cin>>t>>str;
        if (str[0]=='W' || str[0]=='E') {
            if (cur==-20000 || cur==0) {cout<<"NO\n"; return 0;}
            continue;
        }
        if (str[0]=='S') t*=-1;
        if (cur+t < inf || cur+t >0) { cout<<"NO\n"; return 0;}
        if (cur==0) {
            if (str[0]!='S') { cout<<"NO\n"; return 0;}
        }
        if (cur==inf) {
            if (str[0]!='N') {cout<<"NO\n"; return 0;}
        }
        cur+=t;
    }
    if (cur==0) cout<<"YES\n";
    else cout<<"NO\n";
}
