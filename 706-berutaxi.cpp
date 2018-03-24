#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,n,c,d,e;
	float ans[1001];
	cin>>a>>b>>n;
	for (int i=1; i<=n; i++) {
			cin>>c>>d>>e;
			ans[i]=(float)sqrt(pow(abs(c-a),2)+pow(abs(d-b),2))/e;   // waktu= jarak/kecepatan || perpindahan=vektor=pythagoras
	}
	sort(ans+1,ans+n+1);
	printf("%.20f",ans[1]);
}
