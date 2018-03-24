#include <bits/stdc++.h>
using namespace std;

int main() {
    string str,str2="CODEFORCES";
    int l=0,r=0;
    cin>>str;
    int x=str.size();
    while (l<min(10,x) && str[l]==str2[l]) l++;
    while (r<min(10,x) && str[x-1-r]==str2[str2.size()-r-1]) r++;
    if (l+r>=10) cout<<"YES\n";
    else cout<<"NO\n";
}
