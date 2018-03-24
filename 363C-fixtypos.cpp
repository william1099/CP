#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    vector<char> myvec;
    vector<char > myvec2;
    cin>>str;
    for (int i=0; i<=str.size()-1; i++) {
        if (  (str[i]==str[i+1] && str[i+1]==str[i+2])) continue;
            myvec.push_back(str[i]);
    }
    for (int i=0; i<=myvec.size()-1; i++) {
        if (myvec[i]==myvec[i+1] && myvec[i+2]==myvec[i+3]) myvec[i+3]='*';
            myvec2.push_back(myvec[i]);
    }
    for(int i=0; i<=myvec2.size()-1; i++) {
            if (myvec2[i]!='*') cout<<myvec2[i];
    }
}
