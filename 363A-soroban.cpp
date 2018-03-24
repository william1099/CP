#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    long long n,i=1,a[10];
    char str[9]="O-|OOOOO";
    cin>>n;
    if (n==0) {i++; a[1]=0;}
    while (n>0) {
        a[i]=n%10;
        n=n/10; i++;
    }
    for (int j=1; j<=i-1; j++) {
        if (a[j]>=5) {a[j]-=5; swap(str[0],str[1]); }
        str[a[j]+3]='-';
        cout<<str<<"\n";
        str[0]='O'; str[1]='-';
        str[a[j]+3]='O';
    }
}
*/
int main() {
    string str;
    vector<string> myvec;
    cin>>str;
    myvec.push_back("O-|-OOOO");
    myvec.push_back("O-|O-OOO");
    myvec.push_back("O-|OO-OO");
    myvec.push_back("O-|OOO-O");
    myvec.push_back("O-|OOOO-");
    myvec.push_back("-O|-OOOO");
    myvec.push_back("-O|O-OOO");
    myvec.push_back("-O|OO-OO");
    myvec.push_back("-O|OOO-O");
    myvec.push_back("-O|OOOO-");
    for (int i=str.size()-1; i>=0; i-- ) {
        cout<<myvec[str[i]-'0']<<"\n";
    }
}
