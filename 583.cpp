#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 46350

using namespace std;

bool prime[MAX];

int main()
{
    int i,j,k,m,number,s,p,r;
    int q[100000];

    while(scanf("%d",&number))
    {
        if(number==0)
            break;
            s=0;
            m=abs(number);
            int sq =sqrt(m);
            while(m%2==0)
            {
                q[s++]=2;
                m/=2;
            }
            for(int p=3; p<=sq; p=p+2)
                {
                    //if(prime[p])
                    while(m%p==0)
                    {
                            q[s++]=p;
                            m=m/p;
                    }
                }
            if(m!=1)
                q[s++]=m;

                 if(number<0)
                     printf("%d = -1 x ",number);

                 else
                    printf("%d = ",number);
            for(r=0;r<s;r++)
            {
                 printf("%d",q[r]);
                 if(r<s-1)
                    printf(" x ");
            }
            printf("\n");
    }
    return 0;
}
