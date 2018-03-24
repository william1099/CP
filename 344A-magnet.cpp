#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,count=1,i;
	string str,str0;
	cin>>n;
	cin>>str0;
	for (i=2; i<=n; i++) {
		cin>>str;
		if (str!=str0) {
			count++;
		}
		str0=str;
	}
	cout<<count<<endl;
}

/* lain
#include <bits/stdc++.h>
using namespace std;

char op[2][5];  //op untuk 2 array sebanyak 5 karakter 1 array
int n;
int main() {
    scanf("%d", &n);
    int cnt = 0;
    for(int i = 0 ; i < n ; i ++) {
        scanf("%s", op[0]);
        if(i == 0) {
            cnt ++;
            strcpy(op[1], op[0]);
            continue;
        }
        bool flag=true;
        if(op[1][0] - op[0][1] != 0) {  // jika op[1]=26 maka op[1][0]=2 dan jika op[0]=13 maka op[0][1]=3
            flag = false;				//jika sama maka false
        }
        strcpy(op[1], op[0]);
        if(flag) cnt++;   				//berlaku hanya jika true (jika true maka cnt++)
        
    }
    return 0;
}*/
