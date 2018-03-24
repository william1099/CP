#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, a, sum = 0, j, cnt = 1;
    float x = -1;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        sum += a;
    }
    j = k;
    while (x != k) {
        x = (float) (sum + j)/ (float) (n + cnt);
        x = round(x);
        j += k; cnt++;
    }
    cout << cnt - 1 << "\n";
}
