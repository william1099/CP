#include <bits/stdc++.h>
using namespace std;

int n, m, k;
string str[505];
bool visited[505][505];

void dfs(int i , int j) {
    if (visited[i][j]) return;

    if (i < 0 || i > n - 1 || j < 0 || j > m - 1) return;
    if (str[i][j] == '#') return;
    visited[i][j] = 1;
    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);

    if (k) {
        str[i][j] = 'X';
        k--;
    }
}
int main() {
    cin >> n >> m >> k;
    for (int i = 0; i <= n - 1; i++) {
        cin >> str[i];
    }
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j <= m - 1; j++) {
            if (str[i][j] == '.') {
                dfs(i , j);
            }
        }
    }
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j <= m - 1; j++) {
            cout << str[i][j];
        } printf("\n");
    }
}
