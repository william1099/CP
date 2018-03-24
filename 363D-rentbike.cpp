#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,m,a,b[100005],p[100005];
inline bool cek(LL n, LL a, int mid, LL &jum) {
    LL cnt=0;
    for (LL i=1; i<=mid; i++) {
        jum+=p[mid-i+1];
        if (b[n-i+1]<p[mid-i+1]) cnt+=p[mid-i+1]-b[n-i+1];
    }
    if (cnt>(a * 1LL)) return false;
    else return true;
}
int main() {
    cin>>n>>m>>a;
    for (int i=1; i<=n; i++) cin>>b[i];
    for (int i=1; i<=m; i++) cin>>p[i];
    sort(b+1,b+n+1);
    sort(p+1,p+m+1);
    int lf=0,ri=min(n,m),mid;
    LL ans,sum;
    while (lf<=ri) {
        mid=(lf+ri) >> 1;
        LL jum=0,cnt;
        if (cek(n,a,mid,jum)==true) {
            lf=mid+1;
            ans=mid;
            sum=jum;
        }
        else ri=mid-1;
    }
    cout<<ans<<" "<<max(0LL , sum - a)<<"\n";
}




/*
Let's do a binary search over the number of boys that can rent a bike. So let's say that we want to check whether it possible for k boys to rent bikes. If some k boys can rent a bike, then the k "richest" boys (with the most amount of personal money) also can do that. It is easy to see that if they can rent bikes, they can rent k cheapest bikes (if we first sort the bikes in increasing order of price, it will be just the first k bikes).
So, take k richest boys and try to match them with k cheapest bikes, spending as much common budget as possible. The following algorithm works (try to understand and prove it before asking questions): take the boy with least number of money (of course, among the considered k richest) and try to give him the cheapest bike. If the boy has ehough personal money to rent this bike, use his money to do this. Otherwise, use all his money and take some money from the common budget. Continue this process with the second cheapest bike and the second "poorest among the richest" boys. This process can end in two ways: we will either run out of budget and fail to rent k bikes, or we will successfully rent these bikes.
*/
