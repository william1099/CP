#include <bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
int main() {
    int n,c,d,l=-inf,r=inf,prefsum=0;
    cin>>n;
    while (n--) {
        cin>>c>>d;
        if (d==1) l=max(l,1900-prefsum);   //jika di div 1 maka x(nilai) + prefsum selalu >=1900 maka x>=1900-prefsum   (>= berarti selalu cari yg max)
        else r=min(r,1899-prefsum);         //jika di div 2 maka x(nilai) + prefsum selalu <=1899 maka x<=1899-prefsum  (min = cari titik div1 dan div 2 terdekat)
        prefsum+=c;
    }
    if (l>r) cout<<"Impossible\n";
    else if (r==inf) cout<<"Infinity\n";        //jika hanya didiv1
    else cout<<r+prefsum<<"\n";             //titik terdekat + jarak terakhir
}
