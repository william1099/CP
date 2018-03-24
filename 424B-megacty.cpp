#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r = 0, k, s;
    double x, y;
    vector < pair <double , int> > V;
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y >> k;
        V.push_back(make_pair(sqrt((x * x) + (y * y)) , k ));
    }
    sort (V.begin() , V.end());
    while (r <= V.size()-1 && s < 1e6) {
        s += V[r++].second;
    }
    if (s < 1e6) cout << "-1\n";
    else cout << fixed << setprecision(7) << V[r - 1].first <<"\n";
}

/*
int n,s,k[1000005];
double x,y,root,ans=0;
vector <pair<double,int> > pr;

int comp(pair<double,int> x , pair<double,int> y) {
    return x.first<y.first;
}
int main() {
    cin>>n>>s;
    for (int i=1; i<=n; i++) {
        cin>>x>>y>>k[i];
        root=sqrt(x*x+y*y);
        pr.push_back(make_pair(root,k[i]));
    }
    sort(pr.begin(),pr.end(),comp);
    for (int i=0; i<=n-1; i++) {
        ans=ans+pr[i].second;
        if (ans+s>=1e6) return cout<<fixed<<setprecision(7)<<pr[i].first<<"\n",0;
    }
    cout<<"-1\n";
}
*/
