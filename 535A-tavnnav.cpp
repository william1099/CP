#include <bits/stdc++.h>
using namespace std;
string cek2 (int x);
string str,str2;
string cek (int x) {
    switch (x) {
            case 0: return "zero"; break;
            case 1: return "one"; break;
            case 2: return "two"; break;
            case 3: return "three"; break;
            case 4: return "four"; break;
            case 5: return "five"; break;
            case 6: return "six"; break;
            case 7:return "seven"; break;
            case 8: return "eight"; break;
            case 9: return "nine"; break;
            case 10: return "ten"; break;
            case 11: return "eleven"; break;
            case 12: return "twelve"; break;
        }
}
string cek2 (int x) {
    switch (x) {
            case 2:return "twen"; break;
            case 4:return "for"; break;
            case 3:return "thir"; break;
            case 5:return "fif"; break;
            case 8:return "eigh"; break;
            default: return cek(x); break;
        }
}

int main() {
    int n;
    cin>>n;
    if (n<=12) {
        str+=cek(n);
    }
    else if (n>12 && n<20) {
        if (n==14) str="fourteen";
        else str+=cek2(n%10)+"teen";
    }
    else if (n%10==0 && n!=100) {
        str=cek2(n/10)+"ty";
    }
    else if (n>=21 && n<=100) {
        str=cek2(n/10)+"ty-"+cek(n%10);
    }
    else str="one hundred";
    cout<<str<<"\n";
}
