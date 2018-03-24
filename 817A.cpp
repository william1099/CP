#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, a, b;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a >> b;
    long int dx, dy;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    if (dx % a == 0 && dy % b == 0) {
        if ((dx / a) % 2 == (dy / b) % 2) puts("YES");
        else puts("NO");
    }
    else puts("NO");
}
