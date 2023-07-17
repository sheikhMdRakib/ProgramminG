#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,r,n; cin>>x>>y>>r>>n;
    while(n--)
    {
        int a,b; cin>>a>>b;
        if(sqrt((a-x)*(a-x)+(b-y)*(b-y))<=r)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}