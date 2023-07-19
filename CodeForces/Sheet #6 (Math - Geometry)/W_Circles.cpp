#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    double x3,y3,x4,y4;cin>>x3>>y3>>x4>>y4;
    double p=x1-x2,q=y1-y2,r=x3-x4,s=y3-y4;
    double r1=(sqrt(p*p+q*q))/2;
    double r2=(sqrt(r*r+s*s))/2;
    double cxa=(x1+x2)/2,cya=(y1+y2),cxb=(x3+x4)/2,cyb=(y3+y4)/2;
    double d=sqrt((cxa-cxb)*(cxa-cxb)+(cya-cyb)*(cya-cyb));
    if(r1+r2>=d)
    {
        cout<<"YES\n";
    }
    else 
    {
        cout<<"NO\n";
    }
    return 0;
}