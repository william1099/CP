#include <bits/stdc++.h>
using namespace std;
bool comp (char x, char y) {
    return x > y;
}
int main() {
    int n, a = 0, b = 0, pos = 0;
    string str, str2;
    cin >> n;
    cin >> str >> str2;
    sort(str.begin(), str.end(), greater<char>());
    sort(str2.begin(), str2.end(), greater<char>());
    for (int i = 0; i <= n - 1; i++) {
        if (str2[pos] - '0' >= str[i] - '0') {
            pos++;
            continue;
        }
        a++;
    }
    pos = 0;
    for (int i = 0; i <= n - 1; i++) {
        if (str2[pos] - '0' > str[i] - '0') {
            pos++;
            b++;
        }
    }
    cout << a << "\n" << b;
}
