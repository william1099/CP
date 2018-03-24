#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
long long int a[MAXN];

bool comp(long long int x, long long int y) {
    return x > y;
}
int main() {
    long long int n, f, sum = 0, k, l, j = 1, cnt = 1;
    cin >> n >> f;
    for (int i = 1; i <= n; i++) {
        cin >> k >> l;
        if ( k >= l) sum += l;
        else if ( k < l && k > 0) {
            a[cnt] = min(k * 2, l) - k;
            sum += k; cnt++;
        }
    }
    sort(a + 1, a + cnt, comp);
    while(f) {
        sum += a[j];
        j++; f--;
    }
    cout << sum << "\n";
}
