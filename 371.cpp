#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int L,H,V,S,b,c,d,e,f,k,temp;
    while(scanf("%lld %lld",&L,&H))
    {
        if(L==0&&H==0)
            break;
        b=L;
        c=H;
        S=0;
        if(b>c)
        {
            temp=b;
            b=c;
            c=temp;
        }
        for(k=b;k<=c;k++)
        {
            f=0;
            e=k;
            if(e==1)
            {
                e=(3*e)+1;
                f++;
            }
            for(;;)
            {
               if(e==1)
                    break;

               else if(e%2!=0)
               {
                      e=(3*e)+1;
                      f++;
               }

               else if(e%2==0)
               {
                     e=e/2;
                     f++;
               }
            }
            if(f>S)
                {
                    S=f;
                    V=k;
                }
        }
        cout<<"Between "<<b<<" and "<<c<<", "<<V<<" generates the longest sequence of "<<S<<" values."<<"\n";
    }
    return 0;
}
