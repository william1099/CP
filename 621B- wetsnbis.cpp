#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, a[2020] = {0}, a2[2020] = {0}, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        a[x + y]++;
        a2[1010 + x - y]++;
    }
    for (int i = 2; i <= 2010; i++) {
        sum += a[i] * (a[i] - 1) + a2[i] * (a2[i] - 1);
    }
    cout << sum / 2 << "\n";
}
