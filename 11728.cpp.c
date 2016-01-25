#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int i,j,input,cunt=1,m,n,sum,result,p;
    while(scanf("%d",&input))
    {
        if(input==0)
            break;
            result=1;
            p=1;
            for(m=1;m<input;m++)
            {
                sum=1;
                for(n=2;n<=m;n++)
                {
                    if(m%n==0)
                        sum+=n;
                }
                if(sum==input)
                if(m>p)
                {
                    p=m;
                    result=sum;
                }
            }
            if(result==input)
                printf("Case %d: %d\n",cunt++,p);
            else
                printf("Case %d: -1\n",cunt++);
    }
    return 0;
}
