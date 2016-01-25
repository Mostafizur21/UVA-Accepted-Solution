#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int H1,H2,M1,M2,i,j,k;
    while(scanf("%d %d %d %d",&H1,&M1,&H2,&M2))
    {
        if(H1==0&&H2==0&&M1==0&&M2==0)
            break;
        if(H1>H2)
            H2=H2+24;
        if(H1==H2&&M1>M2)
            H2=H2+24;
        i=((H2-H1)*60)+(M2-M1);
        printf("%d\n",i);
    }
    return 0;
}

