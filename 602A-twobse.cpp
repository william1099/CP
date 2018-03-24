#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL exp(LL x, LL y) {
    LL ans = 1;
    for (int i = 1; i <= y; i++) ans = ans * x;
    return ans;
}
int main() {
    LL n, m, bx, by, x[50], y[50], xx = 0, yy = 0;
    cin >> n >> bx;
    for (int i = 1; i <= n; i++) cin >> x[i];
    cin >> m >> by;
    LL nn = n, mm = m;
    for (int i = 1; i <= m; i++) cin >> y[i];
    for (int i = 1; i <= n; i++) xx += exp(bx , --nn) * x[i];
    for (int i = 1; i <= m; i++) yy += exp(by , --mm) * y[i];
    (xx == yy) ? cout << "=\n" : (xx > yy) ? cout << ">\n" : cout << "<\n";
}
