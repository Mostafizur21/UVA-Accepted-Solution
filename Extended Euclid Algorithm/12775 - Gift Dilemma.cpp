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


pii find_lowest(ll x,ll y,ll lx,ll hx,ll ly,ll hy,ll dx,ll dy)
{
    ll mul;

    //making x less than lower limit of x,i.e lx

    if(x>lx)
    {
        mul = (x-lx+dx-1)/dx;
        x-=mul*dx;
        y+=mul*dy;
    }

    //making x just greater than or equal to lx
    if(x<lx)
    {
        mul = (lx-x+dx-1)/dx;
        x+=mul*dx;
        y-=mul*dy;
    }

    //making y less than or equal to hy
    if(y>hy)
    {
        mul = (y-hy+dy-1)/dy;
        x+=mul*dx;
        y-=mul*dy;
    }

    return pii(x,y);
}


ll total_solution(ll a,ll b,ll c,ll lx,ll hx,ll ly,ll hy)
{

    if(c==0)
    {
        if(a==0&&b==0)
            return (hx-lx+1)*(hy-ly+1);// we can choose all the pair

        else if(a==0)
        {
            if(ly<=0&&hy>=0)
                return (hx-lx+1);// we can choose all from lx to hx if there exit 0 in the range of ly to hy

            return 0;// else no solution
        }


        else if(b==0)
        {
            if(lx<=0&&hx>=0)
                return (hy-ly+1);

            return 0;
        }
    }

    if(a==0&&b==0)
        return 0;

    //make a,b,c positive and change lx,hx,ly,hy accordingly as extended euclid can find only for positive a and b

    if(c<0)
    {
        c = -c;
        a = -a;
        b = -b;
    }

    if(a<0)
    {
        a=-a;
        lx = -lx;
        hx = -hx;
        if(lx>hx)
            swap(lx,hx);

    }

    if(b<0)
    {
        b = -b;
        ly = -ly;
        hy = -hy;
        if(ly>hy)
            swap(ly,hy);
    }

    // Find a solution x,y,dx,dy using Extended Euclid

    ll dx,dy,x,y,gcd;

    pii low,high;

    Euclid e = Extended_gcd(a,b);

    gcd = e.d;

    if(c%gcd) return 0;//no solution

    x = e.x*(c/gcd);

    y = e.y*(c/gcd);

    dx = b/gcd;

    dy = a/gcd;

    if(dx==0)
    {
        swap(a,b);
        swap(x,y);
        swap(lx,ly);
        swap(hx,hy);
        swap(dx,dy);
    }

    if(dy==0)
    {
        if(ly<=(c/b)&&hy>=(c/b))
            return (hx-lx+1);
        return 0;
    }

    //Find the lowest value of x and highest valye of y

    low = find_lowest(x,y,lx,hx,ly,hy,dx,dy);

    x = low.first;
    y = low.second;

    if(x<lx || x>hx || y<ly || y>hy)// x or y out of range,no solution
        return 0;

    //Find the highest value of x and lowest value of y

    high = find_lowest(y,x,ly,hy,lx,hx,dy,dx);

    ll result =high.second-low.first;

    result/=dx;

    result++;

    return result;


}

int main()
{

    ll test,A,B,C,P,x1,x2,y1,y2,result;

    scanf("%lld",&test);

    for(int t=1; t<=test; t++)
    {
        result = 0;

        scanf("%lld %lld %lld %lld",&A,&B,&C,&P);

        for(int i=0; P-C*i>=0; i++)
        {
            x1 = 0;
            y1 = 0;
            x2 = P-C*i;
            y2 = x2;

            result+=total_solution(A,B,P-C*i,x1,x2,y1,y2);
        }

        printf("Case %d: %lld\n",t,result);//make the equation like Ax+By=C

    }

    return 0;
}
