#include <bits/stdc++.h>
using namespace std;

int main() {
    string str,str2;
    cin >> str >> str2;
    int n = str.length(), r = 1;
    while (r <= n) {
        if (str[r - 1] < str2[r - 1]) return cout << "-1\n",0;
        else {
            str[r - 1] = str2[r - 1];
        }
        r++;
    }
    cout << str << "\n";
}
