#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int n;
	cin>>n>>s>>s;  //s pertama adalah of kemudian diganti dengan week/month
	if (s=="week") cout<<52+(n%7>4)<<endl;
	else {
		n=max(0,n-29);
		cout<<12-(3*n*n-n)/2<<endl;
	}	
}

/* UNTUK YANG MONTH 
const int bulan[12]={31,29,31,30,31,30,31,31,30,31,30,31};
cin>>n;
for (int i=0; i<=11; i++) {
	if (bulan[i]>=n) sum++;
}
cout<<sum<endl;
*/



/*
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,num;
	string str;
	getline (cin,str);
	string chr=str.substr(0,2);
	istringstream convert(chr);
	convert>>num;
	int found=str.rfind("week"),found2=str.rfind("month");
	if (found!=string::npos) {
		if (num==1 || num==2 || num==3 || num==4 || num==7) num=52;
		else num=53;
	}
	else if (found2!=string::npos) {
		if (num==30) num=11;
		else if (num==31) num=7;
		else if (num<=29) num=12;
	}
	cout<<num<<endl;
}
*/
