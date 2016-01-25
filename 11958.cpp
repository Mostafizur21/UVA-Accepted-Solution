#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int test,bus_number,H,M,H1[101],M1[101],Q[101],i,j,k,m,n,result;
    char c;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        result=2450;
        scanf("%d %d %c %d",&bus_number,&H,&c,&M);
        m=(H*60)+M;
        for(j=0;j<bus_number;j++)
        {
            scanf("%d %c %d %d",&H1[j],&c,&M1[j],&Q[j]);
        }
        for(j=0;j<bus_number;j++)
        {
            k=(H1[j]*60)+M1[j];
            if(k<m)
                k=k+(24*60);
            n=k-m+Q[j];
            if(n<result)
            {
                result=n;
            }
        }
        printf("Case %d: %d\n",i,result);
    }
}
