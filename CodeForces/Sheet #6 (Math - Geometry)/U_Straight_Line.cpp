#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b; cin>>a>>b;
    double p,q; cin>>p>>q;
    double x,y; cin>>x>>y;

    double s1=0,s2=0;
    
    

    if( p!=a && p!=x && a!=x)
    {
         s1=(q-b)/(p-a);
         s2=(y-q)/(x-p);
        
    }
    

    if(s1==s2)
    {
        cout<<"YES\n";
    }
    else if(s1!=s2)
    {
        cout<<"NO\n";
    }
    else if(p==a || p==x)
    {
        cout<<"NO\n";
    }
    
    
    return 0;
}