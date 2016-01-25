#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    long long int test,G,L,i,j,k,m,n;
    while(scanf("%lld",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            scanf("%lld%lld",&G,&L);
            if(L%G==0)
                printf("%lld %lld\n",G,L);
            else
                printf("-1\n");
        }
    }
    return 0;
}
