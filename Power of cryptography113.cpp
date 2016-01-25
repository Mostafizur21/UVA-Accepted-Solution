#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    double n,p,d;
    while(scanf("%lf %lf",&n,&p)==2)
    {
        d = pow(p,1/n);
        printf("%.0lf\n",d);
    }
    return 0;
}
