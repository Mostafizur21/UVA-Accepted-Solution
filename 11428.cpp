#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int N,x,y,i,j,k,m,n;
    while(scanf("%d",&N))
    {
        if(N==0)
            break;
        n=sqrt(N);
        m=0;
        for(x=2;x<=n;x++)
        {
            for(y=1;y<=x;y++)
            {
                if((x*x*x)-(y*y*y)==N)
                {
                    m=1;
                    break;
                }
            }
        if(m==1)
            break;
        }
        if(m==1)
            printf("%d %d\n",x,y);
        else
            printf("No solution\n");
    }
    return 0;
}
