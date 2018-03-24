#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;
    for (int i=1; i<=1000; i++) {
        ostringstream ns;
        ns<<i;
        str+=ns.str();
    }
    cin>>n;
    cout<<str[n-1]<<"\n";
}

/*
int main() {
    int n;
    string str;
    char buffer[5];
    cin>>n;
    for (int i=1; i<=1000; i++) {
        sprintf(buffer,"%d",i);
        str+=buffer;
    }
    cout<<str[n-1]<<"\n";
}
*/
