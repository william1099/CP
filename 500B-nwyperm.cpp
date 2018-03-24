#include <bits/stdc++.h>
using namespace std;

int visited[350];
int n, p[350], a[350];
vector< vector <int> > adj;
vector <int> pos, val;

void dfs(int v) {
    visited[v] = 1;
    pos.push_back(v);
    val.push_back(p[v]);
    for (int i = 0; i < adj[v].size(); i++) {
        if (!visited[adj[v][i]]) {
            dfs(adj[v][i]);
        }
    }
}
int main() {
    char x;
    cin >> n;
    for (int i = 0; i <= n - 1; i++) {
        cin >> p[i];
    }
    adj.resize(n + 3);
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j <= n - 1; j++) {
            cin >> x;
            if (x == '1') adj[i].push_back(j);
        }
    }
    for (int i = 0; i <= n - 1; i++) {
        if (visited[i]) continue;
        pos.clear();
        val.clear();
        dfs(i);
        sort(val.begin(), val.end());
        sort(pos.begin(), pos.end());
        for (int j = 0; j <= val.size() - 1; j++) {
            a[pos[j]] = val[j];
        }
    }
    for (int i = 0; i <= n - 1; i++) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}
