#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[28] = {0}, cnt = 0;
    string str;
    cin >> n >> str;
    for (int i = 0; i <= str.length() - 1; i++) {
        if (str[i] >= 97) a[str[i] - 'a']++;
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            if (a[tolower(str[i]) - 'a'] == 0) cnt++;
            else a[tolower(str[i]) - 'a']--;
        }
     }
     cout << cnt << "\n";
}
