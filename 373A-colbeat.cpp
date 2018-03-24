#include <bits/stdC++.h>
using namespace std;

int main() {
    int n,b[10] = {0};
    char a[5][5];
    cin >> n;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            cin >> a[i][j];
            if (a[i][j] >= '1' && a[i][j] <= '9') b[a[i][j] - '0']++;
        }
    }
    for (int i = 1; i <= 9; i++) {
        if (b[i] > 2 * n) return cout << "NO\n",0;
    }
    cout << "YES\n";

}
