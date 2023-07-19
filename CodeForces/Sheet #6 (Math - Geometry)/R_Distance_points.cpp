#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    double a=x1-x2,b=y1-y2;
    double d=sqrt(a*a+b*b);

    cout<<fixed<<setprecision(9)<<d<<'\n';
    return 0;
}