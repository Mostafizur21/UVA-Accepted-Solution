#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int input,digit,k;
    while(scanf("%lld",&input)!=EOF)
    {
        digit=1;
        k=1;
        while(1)
        {
            if(k%input==0)
                break;
            else
            {
                k=(k*10)+1;
                k=k%input;
                digit++;
            }
        }
        printf("%lld\n",digit);
    }
    return 0;
}
