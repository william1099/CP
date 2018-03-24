#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,x,s,i=1,d;
    cin>>t>>s>>x;
    if (t==x) {cout<<"YES\n"; return 0;}
    while (1) {
        d=t+s*i;
        if (d==x || d+1==x ) {cout<<"YES\n"; return 0;}
        else if (d>x) {cout<<"NO\n"; return 0;}
        i++;
    }
}
