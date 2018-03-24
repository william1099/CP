#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[1001];
    bool flag = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int l = 1, r = n, x = 0 , y = 0;
    while (l <= r) {
        if ( l <= r ) {
            x += max (a[l] , a[r]);
            (a[l] > a[r]) ? l++ : r--;
        }
        if ( l <= r ) {
            y += max (a[l] , a[r]);
            (a[l] > a[r]) ? l++ : r--;
        }
    }
    cout << x << " " << y << "\n";
}
