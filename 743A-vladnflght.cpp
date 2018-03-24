#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,i=1,cnt=0;
    string str;
    char x,temp;
    cin>>n>>a>>b>>str;
    x=str[a-1];
    while (str[b-1]-x!=0) {
        temp=x;
        if (a>b) x=str[a-1-i];
        else x=str[a-1+i];
        if (abs(temp-x)!=0) cnt++;
        i++;
        if (cnt==n) break;
    }
    cout<<cnt<<"\n";
}
