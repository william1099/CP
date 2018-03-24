#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,ans=1;
    map <int,int> mymap;
    cin>>n;
    while (n--) {
        cin>>a;
        for (int i=2; i<=sqrt(a); i++) {
            if (a%i==0) mymap[i]++;
            while (a%i==0) a=a/i;
        }
        if (a>1) mymap[a]++;
    }
   for (auto x: mymap) ans=max(ans,x.second);
   cout<<ans<<"\n";
}
