#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
    long long int Test,input,result[100000],i,j,k,m,n,p,q,len;
    while(scanf("%lld",&Test)!=EOF)
    {
        for(j=1;j<=Test;j++)
        {
            m=0;
            q=0;
            len=sqrt(1000000000);
            scanf("%lld",&input);
            for(i=1;i<=len;i++)
            {
                p=input-(i*i);
                if(p%i==0&&p>0)
                    result[m++]=p;
            }
            printf("Case %lld: ",j);
            for(k=m-1;k>=0;k--)
            {
                if(q)
                    printf(" ");
                printf("%lld",result[k]);
                q=1;
            }
            printf("\n");
        }
    }
    return 0;
}
