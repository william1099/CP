#include <bits/stdc++.h>
using namespace std;
int a[10]={0},ans=100006;
int main() {
    string str;
    cin>>str;
    for (int i=0; i<=str.size()-1; i++) {
        if (str[i]=='B') a[1]++;
        else if (str[i]=='b') a[2]++;
        else if (str[i]=='u') a[3]++;
        else if (str[i]=='l') a[4]++;
        else if (str[i]=='a') a[5]++;
        else if (str[i]=='s') a[6]++;
        else if (str[i]=='r') a[7]++;
    }
    ans=min(min(a[1],min(a[2],min(a[3]/2,min(a[4],min(a[5]/2,min(a[6],a[7])))))),ans);
    cout<<ans<<"\n";
}
