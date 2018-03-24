#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e5 + 5;

int a[MAXN];
int n, cnt1, cnt2, cnt3;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) {
        if (a[i] == a[1]) cnt1++;
        else if (a[i] == a[2]) cnt2++;
        else if (a[i] == a[3]) cnt3++;
    }
    if (cnt2 == 0 && cnt3 == 0) cout << cnt1 << "\n";
    else if (cnt2 == 0) cout << min(cnt1 ,cnt3) << "\n";
    else if (cnt3 == 0) cout << min(cnt1, cnt2) << "\n";
    else cout << min(cnt1, min(cnt2, cnt3)) << "\n";
}
