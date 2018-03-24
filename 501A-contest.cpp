#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mis=max((3*a)/10,a-(a/250)*c);
    int vas=max((3*b)/10,b-(b/250)*d);
    cout<<((mis==vas) ? "Tie\n" : (mis>vas) ? "Misha\n" : "Vasya\n")<<"\n";
}
