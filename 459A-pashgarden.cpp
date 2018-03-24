#include <bits/stdc++.h>

using namespace std;

int main() {
	bool flag=1;
	int x1,y1,x2,y2,x3,x4,y3,y4,d;
	cin>>x1>>y1>>x2>>y2;
	if (x1==x2) {
		d=abs(y2-y1);
		x3=x1+d; x4=x2+d; y3=y1; y4=y2; 
	}
	else if (y1==y2) {
		d=abs(x2-x1);
		y3=y1+d; y4=y2+d; x3=x1; x4=x2; 
	}
	else if (abs(x1-x2)==abs(y1-y2)) {
		x3=x2; x4=x1; y3=y1; y4=y2;
	}
	else {
		flag=0;
	}
	if (flag) {
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
	}
	else {
		cout<<"-1"<<endl;
	}
}
