#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;
int a[MAXN],n, ans;
long long w[MAXN], s;
long long bsearch(int k) {
    for (int i = 1; i <= n; i++) {
        w[i] = a[i] + i * 1LL * k;
    }
    sort(w + 1, w + n + 1);
    long long z = accumulate(w + 1, w + k + 1, 0LL);
    if (z > s) return -1;
    else return z;
}
int main() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int lo = 1, hi = n;
    while (lo <= hi) {
        int mid = (lo + hi) >> 1;
        if (bsearch(mid) != -1) { lo = mid + 1; ans = mid; }
        else hi = mid - 1;
    }
    cout << ans << " " << bsearch(ans) << "\n";
}
