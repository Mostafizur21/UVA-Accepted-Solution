#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int test,arr[16],i,j,m,a,sum;
    scanf("%d",&test);
        for(i=1;i<=test;i++)
        {
            sum=0;
            for(j=0;j<16;j++)
                scanf("%1d",&arr[j]);
            for(m=0;m<16;m+=2)
            {
                if(2*arr[m]>9)
                    sum+=((2*arr[m])%10)+((2*arr[m])/10);
                else
                    sum+=2*arr[m];
            }
            for(a=1;a<16;a+=2)
            {
                sum+=arr[a];
            }
            if(sum%10==0)
                printf("Valid\n");
            else
                printf("Invalid\n");
        }
    return 0;
}

