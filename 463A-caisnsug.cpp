#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s,a,b,sol=100;
    bool flag=0;
    cin>>n>>s;
    for (int i=1; i<=n; i++) {
        cin>>a>>b;
        if (a<s) {
            if (s) sol=min(sol,b);
        }
        if (a<s || a==s && b==0) flag=1;
    }
    if (flag) cout<<100-sol<<"\n";
    else cout<<-1<<"\n";
}


/*
int main() {
    int n,s,a,b,ans=0,cnt=0;
    cin>>n>>s;
    for (int i=1; i<=n; i++) {
        cin>>a>>b;
        if (b==0) b=100;
        if (a<s || a==s && b==100) ans=max(ans,100-b);
        else if (a>s || a==s && b>0) cnt++;
    }
    if (ans==0 && cnt!=n) cout<<0<<"\n";
    else if (ans==0 && cnt==n) cout<<-1<<"\n";
    else cout<<ans<<"\n";
}
*/
