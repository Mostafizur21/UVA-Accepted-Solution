#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
#define mafi 1e-7

using namespace std;

int p,q,r,s,t,u;

double f(double x)
{
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}

double g()
{
    double e,y,c=0,d=1;
    while(c+mafi<d)
    {
        e=(c+d)/2;
        if(f(c)*f(e)<=0)
            d=e;
        else
            c=e;
    }
    return (c+d)/2;
}

int main()
{
   while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)!=EOF)
   {
       if(f(0)*f(1)>0)
           printf("No solution\n");
       else
           printf("%.4lf\n",g());
   }
    return 0;
}
