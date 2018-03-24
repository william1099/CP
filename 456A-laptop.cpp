#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    bool ok=0;
    int m,a,b;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        if(a!=b)
        {
            ok=1;
            break;
        }
    }
    if(ok)
        puts("Happy Alex");
    else
        puts("Poor Alex");
    return 0;
}

/*
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    pair<int,int> pr[n];
    for(int i=0;i<n;i++)
    {
        cin>>pr[i].first>>pr[i].second;
    }
    sort(pr,pr+n);
    for(int j=0;j<n-1;j++)
    {
        if(pr[j].first<pr[j+1].first && pr[j].second>pr[j+1].second)
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}
*/
