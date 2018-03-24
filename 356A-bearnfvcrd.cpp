#include <bits/stdc++.h>
using namespace std;

int main() {
    int t[6],sum=0,cnt[101]={0},d=0;
    for (int i=1; i<=5; i++) {
        cin>>t[i];
        sum+=t[i];
        cnt[t[i]]++;
    }
    for (int i=1; i<=100; i++) {
        if (cnt[i]>1) {
            d=max(d,i * min(3,cnt[i]));
        }
    }
    cout<<sum-d<<"\n";
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t[6],sum=0,cnt[101]={0},mx=0;
    for (int i=1; i<=5; i++) {
        cin>>t[i];
        sum+=t[i];
    }
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            if (t[i]==t[j]) cnt[i]++;
        }
    }
    for (int i=1; i<=5; i++) {
        if (cnt[i]>=3 && 3*t[i]>mx ) mx=3*t[i];
        else if (cnt[i]==2 && 2*t[i]>mx) mx=2*t[i];
    }
    cout<<sum-mx<<"\n";

}
*/
