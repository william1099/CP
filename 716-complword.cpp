#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, str2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";;
    cin >> str;
    set < char > S;
    int r = 1, n = str.length(), j = 1, cnt = 0;
    if (n < 26)  return cout << "-1\n",0;
    while (r <= n) {
        if (str[r - 1] != '?') S.insert(str[r - 1]);
        else if (str[r - 1] == '?') cnt++;
        r++;
    }
    if (S.size() + cnt < 26 ) return cout << "-1\n",0;
    for (int i = 1; i <= n; i++) {
        if (str[i - 1] != '?') cout << str[i - 1];
        else {
            bool flag = 0;
            while (j <= 26) {
                if (!S.count(str2[j - 1])) { cout << str2[j - 1]; flag = 1; } j++;
                if (S.size() == 26) {cout << "A"; flag = 1;}
                if (j >= 27) j = 1;
                if (flag) break;
            }
        }
    }
}
