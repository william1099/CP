#include <bits/stdc++.h>
using namespace std;
int a[1005], sum[1005];

int main() {
    int n, t, x , y;
    vector< pair<int, int> > V;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> x >> y;
        V.push_back(make_pair(x, y));
    }
    sort(V.begin(), V.end());

    for (int j = 0; j < V.size(); j++) {
        if (sum[n] >= V[j].first && sum[n] <= V[j].second) {
                return cout << sum[n] << "\n", 0;
        }
        else {
            if (V[j].first > sum[n]) return cout << V[j].first << "\n", 0;
        }
    }

    cout << "-1\n";
}
