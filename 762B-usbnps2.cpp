#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
vector<LL> myvec,myvec2;
int main() {
    int a,b,c,m,cnta,cntb,cntc;
    LL x,ans1=0,ans2=0;
    char str[10];
    cin>>a>>b>>c>>m;
    for (int i=1; i<=m; i++) {
        cin>>x>>str;
        (str[0]=='U') ? myvec.push_back(x) : myvec2.push_back(x);
    }
    sort(myvec.begin(),myvec.end());
    sort(myvec2.begin(),myvec2.end());
    cnta=min(a,(int)myvec.size());
    cntb=min(b,(int)myvec2.size());
    cntc=min(c,(int)myvec.size()-cnta+(int)myvec2.size()-cntb);
    ans1=cnta+cntb+cntc;

    for (int i=0; i<=cnta-1; i++) ans2+=myvec[i];
    for (int i=0; i<=cntb-1; i++) ans2+=myvec2[i];
    for (int i=0; i<=cntc-1; i++) {
        if (cnta==myvec.size()) ans2+=myvec2[cntb++];
        else if (cntb==myvec2.size()) ans2+=myvec[cnta++];
        else if (myvec[cnta]<myvec2[cntb]) ans2+=myvec[cnta++];
        else ans2+=myvec2[cntb++];
    }
    cout<<ans1<<" "<<ans2<<"\n";
}
