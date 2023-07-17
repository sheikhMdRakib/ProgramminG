#include<stdio.h>

int main(){
    double x1,x2,x3,x4,y1,y2,y3,y4;

    scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
    scanf("%d %d %d %d", &x3,&y3,&x4,&y4); 

    double slope1=0,slope2=0;

    

    if( x1!=x2 && x3!=x4 )
    {
        slope1 = (y1-y2)/(x1-x2);
        slope2 = (y3-y4)/(x3-x4);
    }
    if(slope1==slope2)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return  0;
}