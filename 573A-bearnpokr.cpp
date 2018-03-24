#include <bits/stdc++.h>
using namespace std;

long long int a[1005*1005];
int main() {
    long long int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
        while (a[i] % 2==0) a[i]/=2;
        while (a[i] % 3==0) a[i]/=3;
    }
    for (int i=2; i<=n; i++) {
        if (a[i]!=a[i-1]) { puts("No\n"); return 0; }
    }
    puts("Yes\n");
}
