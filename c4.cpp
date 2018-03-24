#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e5 + 5;

int n, x, a, b, tme = 0, mx = -1;
vector< vector<int> > V;
bool visited[MAXN];

void dfs(int v) {
    if (visited[v]) return;
    tme = tme + 1;
    if (V[v].empty()) {
        mx = max(mx, tme);
    }

    visited[v] = 1;
    for (auto i : V[v]) {
        if (!visited[i]) dfs(i);
    }
}
int main() {
    cin >> n >> x;
    V.resize(n + 2);
    for (int i = 1; i <= n - 1; i++) {
        cin >> a >>b;
        V[a].push_back(b);
        V[b].push_back(a);
    }
    dfs(1);
    cout << mx << "\n";
    if (mx == x) cout << (mx - 1) * 2 << "\n";
    else {
        cout << (mx - x) + (mx - 1) * 2 << "\n";
    }
}
