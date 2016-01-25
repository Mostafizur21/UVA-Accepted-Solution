#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    long long int test,Uper,Lower,x,y,z,result,P,prime_divisor,a,sq;
    scanf("%lld",&test);
    for(a = 1;a<=test;a++)
    {
        cin>>Lower>>Uper;
        result = 0;
        for(x=Lower;x<=Uper;x++)
        {
            y=x;
            z=0;
            prime_divisor=1;
            sq =sqrt(y);

            while(y%2==0)
            {
                z++;
                y/=2;
            }
            prime_divisor*=(z+1);

            for(int p=3; p<=sq; p=p+2)
                {
                    z=0;
                    while(y%p==0)
                    {
                            z++;
                            y=y/p;
                    }
                    prime_divisor*=(z+1);
                }

            if(y!=1)
            {
                prime_divisor*=2;

            }
            if(prime_divisor>result)
            {
                result = prime_divisor;
                P=x;
            }
        }
        cout<<"Between "<<Lower<<" and "<<Uper<<", "<<P<<" has a maximum of "<<result<<" divisors.\n";
    }
    return 0;
}

