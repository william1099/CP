#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,cnt=0,ans=0;
    string str[101];
    cin>>n;
    for (int i=1; i<=n; i++) cin>>str[i];
    for (int i=0; i<=n; i++) {
        cnt=0;
        for (int j=i; j<=n; j++) {
            if (str[i]==str[j]) cnt++;
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<"\n";
}
