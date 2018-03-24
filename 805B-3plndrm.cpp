#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    bool flag = 0;
    cin >> n;
    x = n % 2;
    n = n / 2;
    if (n == 0) return cout << "a",0;
    for (int i = 1; i <= n; i++) {
        if (i % 2) { cout << "aa"; flag = 0; }
        else { cout << "bb"; flag = 1; }
    }
    if (x != 0) {
        if (flag) cout << "a";
        else cout << "b";
    }
}
