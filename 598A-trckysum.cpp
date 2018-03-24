#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,n,sum=0;
    cin>>t;
    while (t--) {
        long long int x=1;
        cin>>n;
        sum=n*(n+1)/2;  //n*(n+1)/2 menghitung nilai dari 1 sampai n
        while (x<=n) x*=2;   //menghitung bilangan pangkat terdekat
        cout<<sum-(x-1)*2<<"\n";
    }
}
