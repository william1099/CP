#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> myvec;
    cin>>n;
    while (n) {
        int sum=0,p=1,N=n;
        while (N) {
            if (N%10) sum+=p;
            N/=10; p*=10;
        }
    myvec.push_back(sum);
    n=n-sum;
}
    cout<<myvec.size()<<"\n";
    sort(myvec.begin(),myvec.end());
    for (int x: myvec) cout<<x<<" ";
}

