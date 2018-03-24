#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL bsrch(LL lo,LL hi,LL k,LL n) {
    LL mid=lo+hi >> 1;
    if (k>mid) bsrch(mid+1,hi,k,n-1);
    else if (k<mid) bsrch(lo,mid-1,k,n-1);
    else return n;
}
int main() {
    LL n,k,r=1;
    cin>>n>>k;
    for (int i=1; i<=n-1; i++) r=r*2+1;
    cout<<bsrch(1,r,k,n)<<"\n";
}
/*
LL cek(LL x) {
    if (x%2==1) return 1;
    else return cek(x/2)+1;
}

int main() {
    LL n,k;
    cin>>n>>k;
    cout<<cek(k)<<"\n";
}

int main() {
    LL n,k,x=2,y=1,cnt=1;
    cin>>n>>k;
    while (k%x!=y) {
        x*=2;       //x itu selisih. misalnya dipos 2 itu 2 dipos 6 itu 2 maka x=4. x juga 2 pangkat
        y*=2;       //2 terletak dipos 2^1 , 3 di 2^2 4 di 2^3 5 di 2^4 dan seterusnya. Jadi y itu 2 pangkat
        cnt++;
    }
    cout<<cnt;
}
*/
