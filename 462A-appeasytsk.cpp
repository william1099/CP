#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,a[115][115];  // a[100][100] dihitung a[101][100] juga begitu juga yg lain
    char ch;
    cin>>n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin>>ch;
            if (ch=='o') a[i][j]=1;
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if ((a[i][j-1]+a[i][j+1]+a[i+1][j]+a[i-1][j]) & 1) {  // jika ganjil
                cout<<"NO\n"; return 0;
            }
        }
    }
  cout<<"YES\n";
}
