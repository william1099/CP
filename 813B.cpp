#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main() {
    LL x, y, l, r, mx = 0;
    set<LL> S;
    cin >> x >> y >> l >> r;
    S.insert(l - 1);
    S.insert(r + 1);
    for (int i = 0; i <= 60; i++) {
        for (int j = 0; j <= 60; j++) {
            double z = pow(x, i) + pow(y, j);
            if (z > 1e18) break;
            LL X = 1, Y = 1;
            for (int k = 1; k <= i; k++) X  *= x;
            for (int k = 1; k <= j; k++) Y  *= y;
            LL Z = X + Y;
            if (Z >= l && Z <= r) S.insert(Z);
        }
    }
    vector<LL> V(S.begin(), S.end());
    ///for (int i = 0; i < V.size(); i++) cout << V[i] <<  " ";

    for (int i = 1; i < V.size(); i++) {
        mx = max(mx, V[i] - V[i - 1] - 1);
        ///cout << mx << " ";
    }
    ///cout << "V[n] : " << V[V.size() - 1] << "\n";
    cout << mx << "\n";
}
