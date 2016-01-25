#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int i;
    double a,b,c,d,e;
    for(i=1;i<=1000;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        d=(a+b+c)/2;
        e=(4.0/3.0)*(sqrt(d*(d-a)*(d-b)*(d-c)));
        if(e>0)
            printf("%.3lf\n",e);
        else
            printf("-1.000\n");
    }
    return 0;
}
