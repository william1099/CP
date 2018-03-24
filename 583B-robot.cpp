#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[1001], f[1001]={0}, cnt = 0, cnt2 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (cnt < n) {
        cnt2++;
        for (int i = 1; i <= n; i++) {
            if (cnt >= a[i] && f[i]==0) cnt++,f[i] = 1;
        }
        if (cnt < n) {
            cnt2++;
            for (int i = n; i >= 1; i--) {
                if (cnt >= a[i] && f[i]==0) cnt++,f[i] = 1;
            }
        }
    }
    cout << cnt2-1 <<"\n";
}
