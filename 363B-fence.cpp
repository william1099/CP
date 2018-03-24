#include <bits/stdc++.h>
using namespace std;
int a[200005];
long long mn=20000000,sum[2000000];
int main() {
    int n,k,index;
    cin>>n>>k;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    for (int i=k; i<=n; i++) {
        if (sum[i]-sum[i-k]<mn) {
            mn=sum[i]-sum[i-k];
            index=i-k+1;
        }
    }
    cout<<index<<"\n";
}
/*
int a[200005];
int main() {
    int n,k;
    long long sum=0;
    cin>>n>>k;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
        if (i<=k) sum+=a[i];
    }
    long long mn=sum;
    int index=1;
    for (int i=k+1; i<=n; i++) {
        sum+=a[i]-a[i-k];
        if (sum<mn) {mn=sum; index=i-k+1;}
    }
    cout<<index<<"\n";
}




/* TLE
int a[200005];
int main() {
    int n,k,ans=20000000,index;
    cin>>n>>k;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<=n-k+1; i++) {
        int sum=0;
        for (int j=i; j<=i+k-1; j++) {
            sum+=a[j];
        }
        if (sum<ans) {
            ans=sum; index=i;
        }
    }
    cout<<index<<"\n";
}
*/
