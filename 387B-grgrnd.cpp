#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n + 2], b[m + 2], l = n, r = m, cnt = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    sort (a + 1, a + n + 1);
    sort (b + 1, b + m + 1);
    while (l >= 1 && r >=1) {
        if (a[l] <= b[r]) r--;
        else cnt++;
        l--;
    }
    cout << cnt + l <<"\n";
}
