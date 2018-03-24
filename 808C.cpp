#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w, a[105], b[105], sum = 0;
    bool flag = 1;
    cin >> n >> w;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = (a[i] + 1) / 2;
        sum += b[i];
    }
    if (sum > w) return cout << "-1\n",0;
    vector<pair <int, int> > V(n + 2);
    for (int i = 1; i <= n; i++) {
        V[i] = make_pair(a[i], i);
        ///V.push_back(make_pair(b[i], i));
    }
    sort(V.rbegin(), V.rend());
    for(int i = 0; flag; i++) {
        int idx = V[i].second;
        int temp = min(a[idx] - b[idx], w - sum);
        b[idx] += temp;
        sum += temp;
        if (w - sum == 0) flag = 0;
    }
    for (int i = 1; i <= n; i++) {
        if (i != 1) printf(" ");
        cout << b[i];
    }
}
