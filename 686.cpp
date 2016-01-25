#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 32768

using namespace std;

bool  prime[MAX];

int main()
{
    int i,j,m,result,x,y;
       for(int i=3;i<=MAX;i+=2)
        prime[i]=true;
        prime[2]=true;
    for(int i=3;i<=sqrt(MAX);i+=2)
    {
        if(prime[i]==true)
        for(int j=i*i;j<MAX;j+=(2*i))
            prime[j]=false;
    }

    while(scanf("%d",&m))
    {
        if(m==0)
            break;
        result=0;
        x=2;
        y=m;
        if(m%2==0)
            m--;
        while(x<=m)
        {
            if(prime[m]);
            else
            {
                while(!prime[m])
                {
                    if(m==3)
                        m--;
                    else
                       m-=2;
                }
            }

            if(prime[x]);
            else
            {
                while(!prime[x])
                {
                    if(x==2)
                        x++;
                    else
                       x+=2;
                }
            }

            if(x+m==y)
            {
                result++;
                if(x==2)
                    x++;
                else
                    x+=2;
            }
            else if(x+m<y)
            {
                if(x==2)
                    x++;
                else
                    x+=2;
            }
            else if(x+m>y)
            {
                if(m==3)
                    m--;
                else
                    m-=2;
            }
        }
           printf("%d\n",result);
    }
    return 0;
}
