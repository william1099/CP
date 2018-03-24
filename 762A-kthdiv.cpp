#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,k;
    set<long long> myset;
    cin>>n>>k;
    for (long long i=1; i<=sqrt(n); i++) {
        if (n%i==0) {
            myset.insert(i); myset.insert(n/i);
        }
        /*
        if (n%(n/i)==0) myset.insert(n/i);  */
    }
    if (k>myset.size()) {cout<<"-1\n"; return 0;}
    long long cnt=0;
    for (auto x : myset) {               //untuk vektor bool auto&&
        cnt++;
        if (cnt==k) cout<<x<<"\n";
    }

}


/*
int main() {
    long long int  n,k,sum=0;
    bool flag=0,ex=0;
    vector<long long int> myvec;
    cin>>n>>k;
    for (long long int i=1; i<=sqrt(n); i++) {
        if (n%i==0 && i*i!=n) {
            myvec.push_back(i); sum++;
        }
        if (i*i==n) flag=1;
    }
     vector<long long int> myvec2 (myvec);
    reverse(myvec2.begin(),myvec2.end());
    long long int cnt=sum*2;
    if (flag) {
        if (k==sum+1) cout<<(int)sqrt(n)<<"\n";
        else if (k>sum+1 && k<=cnt+1 ) cout<<(n/myvec2[k-(sum+1)-1])<<"\n";
        else if (k<sum+1) cout<<myvec[k-1]<<"\n";
        else ex=1;
    }
    else {
        if (k>sum && k<=cnt) cout<<(n/myvec2[k-sum-1])<<"\n";
        else if (k<=sum) cout<<myvec[k-1]<<"\n";
        else ex=1;
    }
    if (ex) cout<<"-1\n";
}
*/
