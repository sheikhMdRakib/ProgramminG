#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<abs(sum)<<endl;
    return 0;
}