#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    int s[n+2], l = 1, r = n - n/2 + 1;
    for (int i = 1; i <= n; i++) cin >> s[i];
    sort (s + 1, s + n + 1);
    while (l <= r && r <= n) {
        if (s[l] * 2 <= s[r] && s[r] > 0 ) {
            cnt++;
            l++;
        }
        r++;
    }
    cout << n - cnt <<"\n";
}

/*TLE
int main() {
    int n,s[500005];
    cin>>n;
    for (int i=1; i<=n; i++) cin>>s[i];
    sort(s+1,s+n+1);
    int mid=(n+1)/2,x=1,mx=n;
    while (mid!=n) {
        if (s[x]*2<=s[mid+1]) mx--,x++;
         mid++;
    }
    cout<<mx;
}




int main() {
    int n,s[500005];
    bool flag=0;
    cin>>n;
    for (int i=1; i<=n; i++) cin>>s[i];
    sort(s+1,s+n+1);
    int lo=0,hi=n/2,mid,ans;
    while (lo<=hi) {
        mid=lo+(hi-lo+1)/2;  //atau (lo+hi)/2 , (hi-lo+1)/2 +1 to prevent infinite loop (rounding bug)
        for (int i=1; i<=mid; i++) {
            if (s[i]*2>s[n-mid+i]) {hi=mid-1; flag=1; }
        }
        if (flag==0) lo=mid+1,ans=mid;
        flag=0;
    }
    cout<<n-ans<<"\n";
}
*/
