#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100005];
    map <int , int> M;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int l = 1, r = 2, mx, mn, ans = 0;
     M[a[1]]++;
    while (r <= n) {
       M[a[r]]++;
       mn = M.begin()->first;
       mx = M.rbegin()->first;
       while (mx - mn > 1) {
            M[a[l]]--;
            if (M[a[l]] == 0) M.erase(a[l]);
            l++;
            mx = M.rbegin()->first;
            mn = M.begin()->first;
       }
       ans = max (ans , r - l + 1);
       r++;
    }
    cout << ans << "\n";
}
