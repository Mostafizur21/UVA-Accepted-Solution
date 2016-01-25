#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define pi 3.141592653589793

int main()
{
    double a,b,c,area_of_sunflower,area_of_violet,area_of_rose,s,radius1,radius2,j;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s = (a+b+c)/2;
        j = sqrt(s*(s-a)*(s-b)*(s-c));
        radius2 = j/s;
        area_of_rose = pi*radius2*radius2;
        area_of_violet = j-area_of_rose;
        radius1 = (a*b*c)/(4*j);
        area_of_sunflower = pi*radius1*radius1-j;
        printf("%.4lf %.4lf %.4lf\n",area_of_sunflower,area_of_violet,area_of_rose);
    }
    return 0;
}

