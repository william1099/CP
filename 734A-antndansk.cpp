#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a_s=0,d_s=0;
    char ch;
    cin >> n;
    while(n--){
        cin >> ch;
        if(ch  ==  'A') a_s++;
        else d_s++;
    }
    if(a_s < d_s)
        cout << "Danik\n";
    else if(a_s > d_s)
        cout << "Anton\n";
    else
        cout << "Friendship\n";
}
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,i,sum[100]={0};
	char str[1000001];
	int a[100001]; 
	cin>>n;
	cin>>str;
	for (i=0; i<=strlen(str)-1; i++) {
		a[i]=str[i]-'0';
		sum[a[i]]++;
	}
	if (sum[17]>sum[20]) {
		cout<<"Anton"<<endl;
	}
	else if (sum[17]<sum[20]) {
		cout<<"Danik"<<endl;
	}
	else {
		cout<<"Friendship"<<endl;
	}
}
*/
