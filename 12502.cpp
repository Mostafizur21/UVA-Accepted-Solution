#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int test,x,y,z,i,j,k,m,n;
    float average,x_more_hour,y_more_hour,total,result;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            average=(float)(x+y)/3;
            x_more_hour=x-average;
            y_more_hour=y-average;
            result=(z/average)*x_more_hour;
            cout<<result<<endl;
        }
    }
    return 0;
}
