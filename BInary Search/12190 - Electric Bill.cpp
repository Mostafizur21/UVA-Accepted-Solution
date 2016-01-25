#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll convert_cost(ll m)
{
    ll cost = 0,n=100;

    n = min(n,m);
    cost+=n*2;
    m-=n;

    n = 9900;
    n = min(n,m);
    cost+=n*3;
    m-=n;

    n = 990000;
    n = min(n,m);
    cost+=n*5;
    m-=n;

    cost+=m*7;

    return cost;
}

ll convert_unit(ll A)
{
    ll unit = 0,n=200;

    n = min(A,n);
    unit+=n/2;
    A-=n;


    n = 29700;
    n = min(A,n);
    unit+=n/3;
    A-=n;

    n = 4950000;
    n = min(A,n);
    unit+=n/5;
    A-=n;

    unit+=A/7;

    return unit;
}

int main()
{

    ll A,B;

    while(scanf("%lld%lld",&A,&B))
    {
        if(A==0&&B==0)
            break;

        ll unit = convert_unit(A);

        ll low =0,mid,high = unit,cost1,cost2;

        while(low<high)
        {
            mid = low+(high-low)/2;

            cost1 = convert_cost(mid);

            cost2 = convert_cost(unit-mid);

            if(abs(cost1-cost2)==B)
                break;

            if((cost2-cost1)<B)
                high = mid;

            else
                low = mid;

        }

        printf("%lld\n",cost1);

    }

    return 0;
}

