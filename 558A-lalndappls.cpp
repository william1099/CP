#include <bits/stdc++.h>
using namespace std;
#define MAXN 10000
int main() {
    int n;
    long long int sum = 0;
    vector < pair <int, int> > V, V2;
    cin >> n;
    int *a = (int *) calloc(n + 2, sizeof(int)), b[105];
    for (int i = 1; i <= n; i++) {
        cin >> *(a + i - 1) >> b[i - 1];
        if (*(a + i - 1) > 0) V.push_back(make_pair(*(a + i - 1),b[i - 1]));
        else V2.push_back(make_pair(*(a + i - 1) , b[i - 1]));
    }
    sort (V.begin(), V.end());
    sort (V2.begin(), V2.end());
    int l = V2.size() - 1, r = 0;
    while (l >= 0 && r <= (int) V.size() - 1) {
        if (V2[l].first ^ V[r].first <= 0) {
            sum += V2[l].second + V[r].second;
            l--; r++;
            if (V.size() != V2.size()) {
                if (r - 1 == (int)V.size() - 1 && l + 1 >=0) sum += V2[l].second;
                else if (r - 1 <= (int) V.size() - 1 && l + 1 == 0) sum += V[r].second;
            }
        }
    }
    if (V.size() == 0) sum = V2[l].second;
    else if (V2.size() == 0) sum = V[r].second;
    cout << sum << "\n";
}
