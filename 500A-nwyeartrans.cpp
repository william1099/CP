#include <bits/stdc++.h>
using namespace std;
int n,t,a[50000],vis[50000];
bool ok;

void dfs(int u) {
    if (ok) return;
    if (u==t) {ok=true; return;}
    vis[u]=true;
    if (vis[a[u]+u]) return;
    dfs(a[u]+u);
}

int main() {
    cin>>n>>t;
    for (int i=1; i<=n-1; i++) cin>>a[i];
    ok=false;
    dfs(1);
    if (ok) cout<<"YES\n";
    else cout<<"NO\n";
}
/*
void dfs(int u,int n) {
    if (vis[u]==1 || n==0) return;
    vis[u]=true;
    dfs(u+a[u],n-1);
}
int main() {
    cin>>n>>t;
    for (int i=1; i<=n-1; i++) cin>>a[i];
    dfs(1,n);
    if (vis[t]==true) cout<<"YES\n";
    else cout<<"NO\n";
}
*/
