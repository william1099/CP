#include <bits/stdc++.h>
using namespace std;
int comp(pair<int,int> x,pair<int,int> y) {
    if (x.first==y.first) return x.second<y.second;
    return x.first>y.first;
}
int main() {
    int n,k,cnt=0;
    pair<int ,int> mypr[100];
    cin>>n>>k;
    for (int i=1; i<=n; i++) cin>>mypr[i].first>>mypr[i].second;
    sort(mypr+1,mypr+n+1,comp);
    for (int i=1; i<=n; i++) {
        if (mypr[i]==mypr[k]) cnt++;
    }
    cout<<cnt<<"\n";
}
