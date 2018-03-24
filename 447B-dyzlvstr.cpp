#include <bits/stdc++.h>
using namespace std;
int k, w[30], s, mx = 0, ans = 0;
string str;

int f(int x, int n) {
    for (int i = 1; i <= n; i++) {
        if (i <= x) ans += i * w[str[i - 1]-'a' + 1];
        else ans += i * mx;
    }
    return ans;
}
int main() {
    cin >> str >> k;
    for (int i = 1; i <= 26; i++) cin >> w[i] , mx = max (mx, w[i]);
    s = str.length();
    cout << f(s , s + k ) << "\n";
}
