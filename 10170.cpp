#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int S,D,result;
    while(scanf("%lld%lld",&S,&D)!=EOF)
    {
        result=0;
        while(result<D)
        {
            result+=S++;
        }
        printf("%lld\n",--S);
    }
    return 0;
}
