#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    int T,x,y,r;
    float a,b,c;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>x>>y>>r;
        a=(float)(sqrt((x*x)+(y*y)));
        b=r-a;
        c=r+a;
        printf("%.2f %.2f\n",b,c);
    }
    return 0;
}
