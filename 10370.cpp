#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int test,N,arr[1000],i,j,k,m,n,sum;
    float a,b;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        sum=n=0;
        scanf("%d",&N);
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[j]);
            sum+=arr[j];
        }
        k=sum/N;
        for(m=0;m<N;m++)
        {
            if(arr[m]>k)
                n++;
        }
        a=(float)100*n/N;
        printf("%.3f%%\n",a);
    }
    return 0;
}
