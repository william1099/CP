#include <bits/stdc++.h>
using namespace std;

int main() {
    string str,str2;
    cin>>str>>str2;
    (str==str2) ? cout<<-1<<"\n" : cout<<max(str.length(),str2.length())<<"\n";
}
