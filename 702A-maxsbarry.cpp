#include <bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
typedef long long LL;
LL a[100005];
int main() {
    LL n,cnt=0,mx=-inf;
    cin>>n;
    a[0]=-1;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
        if (a[i]>a[i-1]) cnt++;
        else cnt=1;
        if (cnt>mx) mx=cnt;
    }
    cout<<mx<<"\n";
}
