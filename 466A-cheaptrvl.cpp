#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m,a,b;
	long int ans,ans1,ans2;
	cin>>n>>m>>a>>b;
	if (a<=(b/m)) {    // mengecek manakah yang termurah a (1biji a ribu) atau (1 biji b/m ribu)
		ans=a*n;        //jika a termurah maka beli yang a semua
	}
	else {							//jika b/m 1 biji yang murah maka beli yang b, jika ada sisa maka liat apakah sisa lebih cocok 
		ans1=(n/m)*b+(n%m)*a;   	//dibeli dengan a atau b (dengan mencari nilai minimumnya)
		ans2=(n/m)*b+b;				//misalnya 12 maka jika m=2 maka 12/2=6 6*b
		ans=min(ans1,ans2);			// misalnya 13 maka jika m=3 sisa 1 , jika a=3 b=1 maka cari lebih murah mana, sisanya beli pake a atau b
	}
	cout<<ans<<endl;
}

// or buat fungsi min sendiri
/* int min(x,y) {
		if (x>y) {
			return y;
		}
		else {
			return x;
		}
}  */
