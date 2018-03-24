#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a[101][101], b[101][101];
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> b[i][j];
            a[i][j] = 1;
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (!b[i][j]) {
                for (int k = 1; k <= n; k++) {
                    a[i][k] = 0;
                }
                for (int l = 1; l <= m; l++) {
                    a[l][j] = 0;
                }
            }
        }
    }

    for (int  i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (b[i][j]) {
                bool ans = 0;
                for (int k = 1; k <= n; k++) {
                    ans = ans | a[i][k];
                }
                for (int l = 1; l <= m; l++) {
                    ans = ans | a[l][j];
                }
                if (!ans) return cout << "NO\n", 0;
            }
        }
    }
    cout << "YES\n";
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }printf("\n");
    }
}
