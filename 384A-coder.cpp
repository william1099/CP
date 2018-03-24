#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans=n-(n)/2;
    if (n%2==1) cout<<pow(ans,2)+(ans-1)*(n-ans)<<"\n";
    else cout<<pow(ans,2)+(ans)*(n-ans)<<"\n";
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (i%2==0 && j%2==0 || i%2==1 && j%2==1) cout<<"C";
            else cout<<".";
        }
        printf("\n");
    }
}


