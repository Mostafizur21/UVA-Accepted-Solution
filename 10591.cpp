#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int square(int a)
{
    int b,c=0,d,e,f;
    while(a>=1)
    {
        b=a%10;
        a=a/10;
        c=c+(b*b);
    }
    return c;
}
int main()
{
    long long int test,N,i,j,k,m,p,q;
    while(scanf("%lld",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            cin>>N;
            m=N;
            p=square(m);
            for(;;)
            {
               if(p<10)
                break;
               else
                {
                    q=p;
                    p=square(q);
                }
            }
            if(p!=1)
             cout<<"Case #"<<i<<": "<<N<<" is an Unhappy number.\n";
            else
             cout<<"Case #"<<i<<": "<<N<<" is a Happy number.\n";
        }
    }
    return 0;
}
