#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main() {
    int n, m, x , y;
    cin >> n >> m >> x >> y;
    int a[n + 2], b[m + 2], ans[n + 1], ans2[n + 1], cnt = 0, l = 1, r = 1;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    while (l <= n) {
        while (r <= m && !(b[r] >= a[l] - x && b[r] <= a[l] + y) && b[r] <= a[l] + y) r++;
        if ((b[r] >= a[l] - x && b[r] <= a[l] + y) && r <= m) {
            ans[cnt] = l; ans2[cnt++] = r;
            r++;
        }
        l++;
    }
    cout << cnt  <<"\n";
    for (int i = 0; i <= cnt - 1; i++) cout << ans[i] << " " << ans2[i] << "\n";
}

