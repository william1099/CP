#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,ans=0,a[101],sum=0,temp;
    cin>>n;
    for (int i=1; i<=n; i++) {cin>>a[i]; sum+=a[i];}     //O(n^2)
    temp=sum;
    for (int i=1; i<=n; i++) {
        for (int j=i; j<=n; j++) {
            if (a[j]==1) sum--;
            else sum++;
            ans=max(ans,sum);
        }
        sum=temp;
    }
    cout<<ans<<"\n";
}
    /*   O(N^3)
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<=n; i++) {          //i harus <= j
        for (int j=i; j<=n; j++) {   //jika j=1 maka ketika i=23 dan j=1 dan k=23 tidak di cnt+=1-a[k]
            int cnt=0;
            for (int k=1; k<=n; k++) {
                if (k>=i && k<=j) cnt+=1-a[k];
                else cnt+=a[k];
            }
            ans=max(ans,cnt);
        }
    }
    cout<<ans<<"\n";
}
*/
//cara 2 sum+=a[i]; cek jika didalam range k (a[k]==1 maka sum-- a[k]==0 maka sum++) dan cari maxnya
