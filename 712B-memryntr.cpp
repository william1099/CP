#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100005];
    int x=0,y=0;
    cin>>str;
    for (int i=0; i<=strlen(str)-1; i++) {
        if (str[i]=='U') y++;
        else if (str[i]=='D') y--;
        else if (str[i]=='R') x++;
        else x--;
    }
    if (strlen(str)%2==0) cout<<(abs(x)+abs(y))/2<<"\n";
    else cout<<-1<<"\n";
}
