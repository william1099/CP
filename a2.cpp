#include <bits/stdc++.h>
using namespace std;
int car[6], p[6];
int main() {
    int str[6][6];
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            cin >> str[i][j];
        }
        if (str[i][0] || str[i][1] || str[i][2]) car[i] = 1;
        car[(i + 3) % 4] |= (str[i][0]);
        car[(i + 2) % 4] |= (str[i][1]);
        car[(i + 1) % 4] |= (str[i][2]);
        p[i] = (str[i][3]);
    }
    for (int i = 0; i <= 3; i++) {
        if (car[i] && p[i]) return cout << "YES\n",0;
    }
    cout << "NO\n";
}
