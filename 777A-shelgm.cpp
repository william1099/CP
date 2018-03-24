#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    n = n % 6;
    for (int i = n; i >= 1; i--) {
        if ((i % 2) == 0 && x == 1) x = 2;
        else if ((i % 2) == 0 && x == 2) x = 1;
        else if ((i % 2) && x == 1) x = 0;
        else if ((i % 2) && x == 0) x = 1;
    }
    cout << x << "\n";
}
