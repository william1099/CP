#include <bits/stdc++.h>
using namespace std;

int main() {
    long int n, x, ans = 1;
    cin >> n;
    if (n < 10) return cout << "1\n",0;
    x = n;
    while (x > 9) {
        x /= 10;
        ans *= 10;
    }
    cout << (x + 1) * ans - n << "\n";
}
