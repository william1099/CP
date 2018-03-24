#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,a[101],mx=-1,mn=9999,maxx,minn,ans;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
        if (a[i]>mx) {mx=a[i]; maxx=i;}
        if (a[i]<mn) {mn=a[i]; minn=i; }
    }
    ans=max(max(abs(maxx-minn),(maxx-1)),max(max((minn-1),abs(n-minn)),abs(maxx-n) ));
    cout<<ans<<"\n";
}
