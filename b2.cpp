#include <bits/stdc++.h>
using namespace std;
const int inf = 1e9+99;
string str[105];
int ansL, ansR = inf, nansL, nansR;
int mx[25], mn[25], cnt;
bool cek(string str) {
    for(int i = 0; i <= str.length() - 1; i++) {
        if (str[i] == '1') return 0;
    }
    return 1;
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> str[i];
    }
    reverse(str + 1, str + n + 1);
    for(;n && cek(str[n]);) --n;
	if(!n) return cout<<0<<endl,0;
    for (int i = 1; i <= n; i++) {

        int L = 0;
        for (; str[i][L] == '0' &&  L < m + 2; ) ++L;
        int R = 0;
        for (; str[i][m + 1 - R] == '0' && R < m + 2; ) ++R;
        mx[i] = m + 1 - R;
        mn[i] = m + 1 - L;
       /// cout << mx[i] << " " << mn[i] << " " << L << " " << R << "\n";
    }
    for (int i = 1; i <= n; i++) {
        if (i != 1) ansL++, ansR++;

        if (cek(str[i])) continue;

        if (i == n) return cout << min(ansL + mx[i], ansR + mn[i]) << "\n",0;
        nansL = min(ansL + mx[i] * 2, ansR + m + 1);
        nansR = min(ansR + mn[i] * 2, ansL + m + 1);
        ansL = nansL;
        ansR = nansR;
        ///cout<<"after i="<<i<<": "<<ansL<<","<<ansR<<endl;
    }
}

