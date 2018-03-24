#include <bits/stdc++.h>
using namespace std;

struct point {
    int x,y;
};
bool comp(point a, point b) {
	return a.x - b.x < 0;
}
int main() {
    int x,y,xx=1,yy=1;;
    point p;
    vector<point> myvec;
    vector<int> a,b;
    for (int i=1; i<=8; i++) {
        cin>>x>>y;
        p.x=x; p.y=y;
        myvec.push_back(p);
    }
    sort(myvec.begin(),myvec.end(),comp);
    for (int i=1,j=myvec.size()-1; i<j; i++,j--) {
        if (myvec[i].x==myvec[i-1].x) xx++;
        if (myvec[j].x==myvec[j-1].x) yy++;
        a.push_back(myvec[i-1].y);
        b.push_back(myvec[j].y);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if (xx!=3 || yy!=3) { cout<<"ugly\n"; return 0;}
    if (myvec[3].y==a[1] || myvec[4].y==a[1]) {cout<<"ugly\n"; return 0;}
    for (int i=0; i<=2; i++) {
        if (a[i]!=b[i]) {cout<<"ugly\n"; return 0;}
    }
    cout<<"respectable\n";
}
