#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;

bool h[n][m];
for(int i=0;i<n;i++)
    for(int j=0; j<m; j++)
    h[i][j]=0;

for(int x=1; x<=k;x++) {
    int a,b;
    cin>>a>>b;
    a--;b--;
    h[a][b]=1;

    if(a-1 >=0 && b-1 >=0 && h[a-1][b-1] && h[a][b-1] && h[a-1][b]) return cout<<x,0;
    if(a-1 >=0 && b+1 <m && h[a-1][b+1] && h[a][b+1] && h[a-1][b]) return cout<<x,0;
    if(a+1 <n && b+1 <m && h[a+1][b+1] && h[a][b+1] && h[a+1][b]) return cout<<x,0;
    if(a+1 <n && b-1>=0 && h[a+1][b-1] && h[a][b-1] && h[a+1][b]) return cout<<x,0;
}
    cout<<0;
}
