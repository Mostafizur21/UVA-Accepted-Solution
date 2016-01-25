#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long input,result,sqt,check,i;

    while(scanf("%lld",&input) && input)
    {
        result = 0;

        check = 0;

        if(input<0)
            input*=-1;

        if(input%2==0)
        {
            result = 2;

            check++;

            while(input%2==0)
            {
                input/=2;

            }
        }

        for(i=3; i*i<=input; i+=2)
        {
            if(input%i==0)
            {
                result = i;

                check++;

                while(input%i==0)
                {
                    input/=i;

                }
            }
        }

        if(input>1)
        {
            if(result<input)
                result = input;

            check++;
        }

        if(check>1)
            printf("%lld\n",result);

        else
            printf("-1\n");
    }

    return 0;
}
