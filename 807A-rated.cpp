#include <bits/stdc++.h>
using namespace std;
bool comp(int x, int y) {
    return (x > y);
}
int main() {
    int n;
    bool flag = true;
    cin >> n;
    int a[n + 2], b[n + 2];
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) flag = false;
    }
    if (!flag) return cout << "rated\n",0;
    sort(a + 1, a + n + 1, comp);
    for (int i = 1; i <= n; i++) {
        if (b[i] != a[i] ) return cout <<"unrated\n",0;
    }
    cout << "maybe\n";
}
