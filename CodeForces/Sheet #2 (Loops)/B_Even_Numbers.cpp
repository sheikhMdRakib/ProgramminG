#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin>>n;
    if(n<2)
    {
        cout<<"-1\n";
    }
    int i;
    for(i=2;i<=n;i+=2)
    {
        cout<<i<<'\n';
    }
    return 0;
}