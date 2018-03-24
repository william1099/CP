#include <bits/stdc++.h>
using namespace std;
/*
int visited[502], ans, Stack[1002], top;
int main() {
    int n, m, w[502], b[1002];
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
        if (!visited[b[i]]) {
            Stack[++top] = b[i];
            visited[b[i]] = 1;
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= top; j++) {
            if (Stack[j] == b[i]) {
                for (int k = j; k > 1; k--) {
                    Stack[k] = Stack[k - 1];
                }
                Stack[1] = b[i];
                break;
            }
            ans += w[Stack[j]];
        }
    }
    cout << ans << "\n";

}
*/
int visited[502], b[502], w[502], m, n, ans;
deque<int> Stack;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
        for (int j = 0; j < Stack.size(); j++) {
            if (b[i] == Stack[j]) {
                Stack.erase(Stack.begin() + j);
                break;
            }
            else {
                ans += w[Stack[j]];
            }
        }
        Stack.push_front(b[i]);
    }
    cout << ans << "\n";
}

