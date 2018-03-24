#include <bits/stdc++.h>
using namespace std;

int a[200005],n;
char temp[200005];
string p,t;

inline bool cek(int x) {
    for (int i=0; i<=n-1; i++) temp[i]='0';
    for (int i=x; i<=n-1; i++) {
        temp[a[i]]=t[a[i]];
    }
    for (int i=0,j=0; i<=n-1; i++) {
        if (p[j]==temp[i]) j++;
        if (j==(int) p.size()) return true;
    }
    return false;
}
int main() {
    cin>>t>>p;
    n=t.length();
    for (int i=0; i<=n-1; i++) { cin>>a[i]; a[i]--; }
    int lo=0,hi=n,mid,ans;
    while (lo<=hi) {
        mid=(lo+hi) >> 1;
        if (cek(mid)) {
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans<<"\n";
}
