#include<bits/stdc++.h>
#define ll long long

using namespace std;

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


int main()
{
    ll n,c1,c2,n1,n2;

    while(scanf("%lld",&n))
    {
        if(!n)
            break;

        scanf("%lld %lld %lld %lld",&c1,&n1,&c2,&n2);

        Euclid e = Extended_gcd(n1,n2);// finding x,y,d where xn1+yn2=d

        ll x,y,gcd;

        x = e.x;

        y = e.y;

        gcd = e.d;

        if(n%gcd)
            printf("failed\n");

        else
        {
            x = (x*n)/gcd;

            y = (y*n)/gcd;

            ll a = n1/gcd;

            ll b = n2/gcd;

            ll tot = -1;

            ll shift = x/b;

            x-=shift*b;//making cost as small as possible

            y+=shift*a;

            ll ansx,ansy;

            while(x<0)
            {
                x+=b;
                y-=a;
            }

            if(y>=0)
            {
                tot = x*c1+y*c2;

                ansx = x, ansy = y;
            }

            shift = y/a;

            x+=shift*b;

            y-=shift*a;

            while(y<0)
            {
                x-=b;
                y+=a;
            }

            if(x>=0)
            {
                if(tot==-1)
                {
                    tot = x*c1+y*c2;

                    ansx = x, ansy = y;
                }

                else
                {
                    if(tot>x*c1+y*c2)//if the previous cost is greater then change the cost as small as possilbe
                    {
                        tot = x*c1+y*c2;

                        ansx = x, ansy = y;
                    }
                }
            }

            if(tot==-1)// we can not find any solution
                printf("failed\n");

            else
                printf("%lld %lld\n",ansx,ansy);
        }

    }

    return 0;
}
