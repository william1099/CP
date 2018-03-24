#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    while (n>0) {
        if (n%10==1) n/=10;
        else if (n%100==14) n/=100;
        else if (n%1000==144) n/=1000;
        else {cout<<"NO\n"; return 0;}
    }
    cout<<"YES\n";

    /*
    char str[15];
    int cnt=0;
    cin>>str;
    for (int i=0; i<=strlen(str)-1;) {
        if (str[i]=='1' && str[i+1]!='4') i++;
        else if (str[i]=='1' && str[i+1]=='4' && str[i+2]!='4') i+=2;
        else if (str[i]=='1' && str[i+1]=='4' && str[i+1]=='4') i+=3;
        else {cout<<"NO\n"; return 0;}
    }
    cout<<"YES\n";
    }

    for (int i=0; i<=strlen(str)-1; i++) {
        if (str[i]=='1' && str[i+1]!='4') cnt++;
        else if (str[i]=='1' && str[i+1]=='4' && str[i+2]!='4' ) cnt+=2;
        else if (str[i]=='1' && str[i+1]=='4' && str[i+2]=='4') cnt+=3;
    }
    if (cnt==strlen(str)) cout<<"YES\n";
    else cout<<"NO\n";
    */
}
