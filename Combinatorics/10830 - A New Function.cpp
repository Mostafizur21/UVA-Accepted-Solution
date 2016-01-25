#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    int t=1;

    ll n,i,ans,sum1,sum2,temp,a,b;

    while(scanf("%lld",&n))
    {
        if(n==0)
            break;

        ans=0;

        for(i=2; i <= sqrt(n); i++)
        {
            ans+= ((n/i) - 1) * i;

            temp = n / i;

            if(temp > i)
            {
                a = n / (i+1);

                b = n / i;

                sum1 = (a * (a+1)) / 2;

                sum2 = (b * (b+1)) / 2;

                ans += (sum2 - sum1) * (i - 1);

            }

        }

        printf("Case %d: %lld\n",t++,ans);

    }

    return 0;
}
