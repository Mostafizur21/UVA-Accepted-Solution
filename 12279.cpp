#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int N,arr[1001],balance,i,m,n=1,cunt;
    while(scanf("%d",&N))
    {
        cunt=0;
        if(N==0)
            break;
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==0)
                cunt++;
        }
        m=N-cunt;
        balance=m-cunt;
        printf("Case %d: %d\n",n++,balance);
    }
    return 0;
}
