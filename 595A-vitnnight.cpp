#include <bits/stdc++.h>
using namespace std;
long int a[25000],cnt=0;
int main() {
    int n,m;
    cin>>n>>m>>a[1];
    for (long int i=2; i<=n*m*2; i++) {
        cin>>a[i];
        if (i%2==0 && (a[i]==1 || a[i-1]==1)) cnt++;  //read (a,b) if a+b>=1 cnt++
    }
    cout<<cnt<<"\n";
}
