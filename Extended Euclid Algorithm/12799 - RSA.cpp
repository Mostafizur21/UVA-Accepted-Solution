#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod;

typedef pair<ll,ll>pii;

struct Euclid
{
    ll x,y,d;
    Euclid() {};
    Euclid(ll xx,ll yy,ll dd)
    {
        x = xx, y = yy, d = dd;
    }
};


Euclid Extended_gcd(ll a, ll b)// input a,b Output x,y,d;ax+by = d,d=gcd(a,b)
{
    if(!b)
        return Euclid(1,0,a);

    Euclid e = Extended_gcd(b,a%b);

    return Euclid(e.y,e.x-a/b*e.y,e.d);
}

ll power(ll n,ll m)
{
    if(m==0)
        return 1;

    if(m%2==0)
    {
        ll ret = power(n,m/2);

        return ((ret%mod)*(ret%mod))%mod;
    }

    else
        return ((n%mod)*power(n,m-1)%mod)%mod;
}


ll phi(ll n)
{
    ll ret=n;

    for(ll i=2; i*i<=n; i++)
    {

        if(n%i==0)
        {

            while(n%i==0)
            {
                n /= i;
            }

            ret-=ret/i;
        }

    }
    // this case will happen if n is a prime number
    // in that case we won't find any prime that divides n
    // that's less or equal to sqrt(n)

    if (n > 1)
        ret-=ret/n;

    return ret;
}

int main()
{

    ll N,E,C,phi_n,d,m;

    while(scanf("%lld %lld %lld",&N,&E,&C)!=EOF)
    {

        phi_n = phi(N);

        mod = N;

        Euclid e = Extended_gcd(E,phi_n);

        d = e.x;

        if(d<0)
            d+=phi_n;

        ll m = power(C,d);

        printf("%lld\n",m);

    }

    return 0;
}
