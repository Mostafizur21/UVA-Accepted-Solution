#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int a,b,c,d,e,f,i,j,k,temp;
    while(scanf("%lld %lld",&i,&j)!=EOF)
    {
        b=i;
        c=j;
        a=1;
        if(b>c)
        {
            temp=b;
            b=c;
            c=temp;
        }
        for(k=b; k<=c; k++)
        {
            f=0;
            e=k;
            for(d=1;; d++)
            {
                f++;
                if(e==1)
                    break;
                else if(e%2!=0)
                    e=(3*e)+1;
                else if(e%2==0)
                    e=e/2;
            }
            if(f>a)
                a=f;
        }
        cout<<i<<" "<<j<<" "<<a<<"\n";
    }
    return 0;
}
