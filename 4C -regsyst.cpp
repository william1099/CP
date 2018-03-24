#include <bits/stdc++.h>
using namespace std;

int Hash(char *str) {
    long long h = 0, N = 1998585857;
    while (*str ) {
        h = ((h * 131) + (*str++) + N) % N;
    }
    return h % N;
}

int Hash2(char *str) {
    long long h = 0, N = 127398127;
    while (*str ) {
        h = ((h * 131) + (*str++) + N) % N;
    }
    return h % N;
}
int main() {
    map < pair <int, int> , int> M;
    int n;
    pair <int, int> P;
    char str[35];
    cin >> n;
    while (n--) {
        cin >> str;
        P.first = Hash(str);
        P.second = Hash2(str);
        if (M.count(P) == 0) {
            M[P] = 1;
            cout << "OK\n";
        }
        else {
            M[P]++;
            cout << str << M[P] - 1 << "\n";
        }
    }
}

/*
int main() {
    int n;
    map <string , int> M;
    string str;
    cin >> n;
    while (n--) {
        cin >> str;
        if (M[str] == 0) {  /// M.count(str) == 0
            M[str] = 1;
            cout << "OK\n";
        }
        else {
            M[str]++;
            cout << str << M[str] - 1 << "\n";
        }
    }
}
*/
