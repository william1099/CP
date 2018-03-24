#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e5+5;
int main() {
    int n, k, a[MAXN];
    cin >> n >> k;
    vector<long long> sum(n + 2, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    double ans = 0;
    for (int i = 1; i + k - 1 <= n; i++) {
        ans += sum[i + k - 1 ] - sum[i - 1];
    }
    printf("%.15f\n", ans * 1.0 / (n - k + 1));
}
