#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,p; cin>>x>>p;
    float result = p*100/(100-x);
    cout<<fixed<<setprecision(2)<<result;
    return 0;
}