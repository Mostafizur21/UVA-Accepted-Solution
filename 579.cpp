#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int hour,minute;
    float angle;
    char ch;
    while(scanf("%d%c%d",&hour,&ch,&minute))
    {
        if(hour==0&&minute==0)
            break;
        angle=float(abs((.5*(60*hour-11*minute))));
        angle=min(angle,360-angle);
        printf("%.3f\n",angle);
    }
    return 0;
}
