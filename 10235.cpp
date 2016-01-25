#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#define MAX 1000000

bool a[MAX];

using namespace std;

int main()
{
    int i,j,k,m,n;
    for(i=4;i<=999999;i+=2)
        a[i]=1;
        a[2]=0;
    for(i=3;i<=999999;i+=2)
        a[i]=0;
    n=int(sqrt((double)999999));
    for(i=3;i<=n;i+=2)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<=999999;j+=i+i)
                a[j]=1;
        }
    }
    while(scanf("%d",&m)!=EOF)
    {
        k=0;
        if(a[m]==1)
        printf("%d is not prime.\n",m);
        else if(a[m]==0)
        {
            j=m;
            while(m>=1)
            {
                 k=(k*10)+(m%10);
                 m=m/10;
            }
            if(a[j]==0&&a[k]==0)
                printf("%d is emirp.\n",j);
            else if(a[j]==0)
                printf("%d is prime.\n",j);
        }
    }
    return 0;
}
