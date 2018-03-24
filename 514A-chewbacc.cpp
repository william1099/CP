#include <bits/stdc++.h>

using namespace std;

void change(char &x) {
	x='9'-x+'0';   //'9' - x ('5') hasil=integer , maka + '0' = char
}
int main() {
	char str[20];
	int i;
	cin>>str;
	for (i=0; i<=strlen(str)-1; i++) {
		if (str[i]>='5') {
			change(str[i]);
		}
	}
	if (str[0]=='0') {
		str[0]='9';
	}
	cout<<str<<endl;
}

/*   ANSI C

#include <string.h>
#include <stdio.h>

void change(char *x){
    *x =  '0' + 9 - *x + '0';
}
int main()
{
    char num[32];
    scanf("%s", num);
    if(num[0]!='9' && num[0]>='5')
        change(&num[0]);
    int i;
    for(i = 1; i < strlen(num); ++i)
        if(num[i]>='5')
            change(&num[i]);
    puts(num);
    return 0;
}

	C++
	#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cin >> x;

    for (auto& digit : x)
    {
        if (digit > '4')
            digit = '9' - digit + '0';
    }

    if (x.front() == '0')
        x.front() = '9';
    cout << x << endl;
    return 0;
}
*/
