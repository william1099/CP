#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {
	char str[20];
	long long int ans;
	int i,n;
	cin>>str;
	n=strlen(str)-1;
	if (str[0]=='-') {
		if (str[n]>=str[n-1]) {
			str[n]='\0';
		}
		else {
			str[n-1]=str[n];
			str[n]='\0';
		}
	}
	istringstream convert(str);
	convert>>ans;
	cout<<ans<<endl;
	
}
// atau jika cin>>n
/*  nb : 2455 mod 10 =5 mod 100=55 mod 1000=455
if(n>=0)
        {
            printf("%lld\n", n);
        }
        else
        {
            div1 = n%10;
            s1= n/10;
            div2 = s1%10;
            s2 = (s1-div2)+div1;
            if(s1>=s2)
            {
                printf("%lld\n", s1);
            }
            else if(s1<s2)
            {
                printf("%lld\n", s2);
            }
        }
        */
