#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (n & 1) { cout<<"-1\n"; return 0; }      //if odd they cant be perfect permttion
    for (int i=1; i<=n-1; i+=2) {
        cout<<i+1<<" "<<i<<" ";
    }
}
// permutation p if n=6  = squence char not exceed n 1 2 3 4 5 6 = p1 p2 p3 p4 p5 p6
//i th permutation of p = pi
// Ppi = i (ofcourse)
//then to satisfied pi!=i swap first n sec char 2 1 4 3 6 5 = Ppi=i and pi!=i
