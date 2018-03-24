#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[25];
    cin>>str;
    cout<<(strlen(str)+1)*26-strlen(str)<<"\n";
}
//brute force : adding string with every character and push to set
