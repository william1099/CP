#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int na,nb,k,m,a,b,cnt=0;
    cin>>na>>nb>>k>>m;
    for (int i=1; i<=na; i++) {
            cin>>a;
            if (i==k) k=a;
    }
    for (int i=1; i<=nb; i++) {
            cin>>b;
            if (b>k) cnt++;
    }
    (cnt>=m) ? cout<<"YES\n" : cout<<"NO\n";
}

/*   SHORT WAY
int a[MAXN],b[MAXN];
int main()
{
   int n,m,p,q;  cin>>n>>m>>p>>q;
   for(int i=1;i<=n;i++)   scanf("%d",&a[i]);
   for(int i=1;i<=m;i++)   scanf("%d",&b[i]);
   if(a[p]<b[m-q+1])  puts("YES");   //b ngambil yg minimal paling besar
   else puts("NO");
}
*/
