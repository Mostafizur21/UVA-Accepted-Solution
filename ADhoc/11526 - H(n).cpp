#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main()
{
    int test;

    ll n,result,sqt,i,j;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%lld",&n);

        sqt = sqrt(n);

        result = 0;

        for(int t=1; t<=sqt; t++)
        {
            result+=n/t;
        }

        for(int t=1; t<=sqt; t++)
        {
            i = n/t;
            j= n/(t+1);

            result+=(i-j)*t;

            if(i==sqt)
                result-=t;

        }

        printf("%lld\n",result);

    }

    return 0;

}
