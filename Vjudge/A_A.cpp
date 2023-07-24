#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        long long d1=((x1*x1+y1*y1));
        long long d2=((x2*x2+y2*y2));

        if(d1>d2)
        {
            cout<<"ALEX\n";
        }
        else if(d1<d2)
        {
            cout<<"BOB\n";
        }
        else if(d1==d2)
        {
            cout<<"EQUAL\n";
        }
    }
    return 0;
}