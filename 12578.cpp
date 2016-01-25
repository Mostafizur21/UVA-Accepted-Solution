#include<iostream>
#include<cstdio>
#include<cmath>
#define PI 2*acos(0.0)

using namespace std;

int main()
{
    int test,j,k,m,i;
    double radius,length,width,area_of_flug,area,area_of_red,area_of_green;
    cin>>test;
    while(test--)
    {
            scanf("%lf",&length);
            width=((3*length)/5);
            radius=(length/5);
            area_of_red=PI*radius*radius;
            area_of_flug=length*width;
            area_of_green=area_of_flug-area_of_red;
            printf("%.2lf %.2lf\n",area_of_red,area_of_green);
    }
    return 0;
}
