#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m,a,mx=-1,maxx;
    cin>>n>>m;
    for (int i=1; i<=n; i++) {
        cin>>a;
        a=(a+m-1)/m;
        if (a>=mx) {mx=a; maxx=i;}
    }
    cout<<maxx<<"\n";
}

/*        QUEUE
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m,a,ans,fir,sec;
    queue < pair<int,int> > q;
    cin>>n>>m;
    for (int i=1; i<=n; i++) {
        cin>>a;
        q.push(make_pair(i,a));
    }
    while (!q.empty()) {
         fir=q.front().first;
         sec=q.front().second;
        q.pop();
        if (sec>m) q.push(make_pair(fir,sec-m));
        ans=fir;
    }
    cout<<fir<<"\n";
}
*/
