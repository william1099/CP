#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL h[100005],t[100005];
int main() {
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) cin>>h[i];
    t[n]=0;
    for (int i=n-1; i>=1; i--) {
        if (h[i]<=h[i+1]) { t[i]=h[i+1]-h[i]+1; h[i]=h[i+1]; }
        else t[i]=0;
    }
    for (int i=1; i<=n; i++) cout<<t[i]<<" ";
    printf("\n");
}
