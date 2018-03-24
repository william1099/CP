#include <bits/stdc++.h>
using namespace std;
vector<long long> myvec;
void solve(long long x) {
    if (x>1e9) return;
    myvec.push_back(x);
    solve(x*10+4);
    solve(x*10+7);
}
int main() {
    long long n;
    solve(0);
    cin>>n;
    sort(myvec.begin(),myvec.end());
    for (int i=0; i<=myvec.size(); i++) {
        if (myvec[i]==n) { cout<<i<<"\n"; return 0; }
    }
}

