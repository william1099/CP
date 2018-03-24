#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int pos=-1;
    bool flag=0;
    cin>>str;
        for (int i=0; i<=str.size()-1; i++) {
            if ((str[i]-'0')%2==0 && flag==0) {
                if (str[str.size()-1]-'0'>str[i]-'0') { swap(str[i],str[str.size()-1]); flag=1; }
                pos=i;
            }
        }
        if (flag==0 && pos!=-1) swap(str[str.size()-1],str[pos]);
        if (pos==-1) cout<<"-1\n";
        else cout<<str<<"\n";
}
