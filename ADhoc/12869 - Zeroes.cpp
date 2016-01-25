#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long low,high;

    while(scanf("%lld%lld",&low,&high))
    {

        if(low==0&&high==0)
            break;

        printf("%lld\n",high/5-low/5+1);

    }

    return 0;
}
