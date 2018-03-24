#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,ans1=1000005,ans2=1000005;
    cin>>a>>b>>c>>d;
    for (int i=0; i<=100; i++) {
        if ((b+i*a-d)%c==0 && (b+i*a-d)>=0) { ans1=b+i*a; break; }
    }
    for (int i=0; i<=100; i++) {
        if ((d+i*c-b)%a==0 && (d+i*c-b)>=0) {ans2=d+i*c; break; }
    }
    if (ans2==1000005 && ans1==1000005 ) cout<<-1<"\n";
    else cout<<min(ans1,ans2)<<"\n";
}
