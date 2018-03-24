#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main() {
    LL r,x1,y1,x2,y2,d;
    double jarak;
    cin>>r>>x1>>y1>>x2>>y2;
    d=((x1-x2)* 1LL *(x1-x2) + (y1-y2)* 1LL * (y1-y2));
    jarak=sqrt(d);
    if (fmod(jarak,2*r)==0) cout<<(LL) (jarak/(2*r))<<"\n";
    else cout<<(LL) (jarak/(2*r))+1<<"\n";
}
