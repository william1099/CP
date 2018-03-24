#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,mx=0;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>a;
        if (a>mx) mx=a;
    }
    cout<<mx<<"\n";
}

/*   supaya energi dapat tercukupi sampai n maka setiap hk-hk+1 = negatif maka dibuat sampai 0 karena syarat minimum sampai ke akhir adalah 0
int main() {
    int n,a,energy=0,x=0,ans=0;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>a;
        energy+=x-a;
        if (energy<0) {
            ans+=abs(energy);
            energy=0;
        }
        x=a;
    }
    cout<<ans<<"\n";
}
*/
