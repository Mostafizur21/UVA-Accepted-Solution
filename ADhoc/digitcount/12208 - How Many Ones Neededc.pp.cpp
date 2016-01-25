#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long


using namespace std;

/* Returns position of leftmost set bit. The rightmost
   position is considered as 0 */
ull getLeftmostBit (ll n)
{
    ll m = 0;
    while (n  > 1)
    {
        n = n >> 1;
        m++;
    }
    return m;
}

/* Given the position of previous leftmost set bit in n (or an upper
   bound on leftmost position) returns the new position of leftmost
   set bit in n  */
ull getNextLeftmostBit (ll n, ll m)
{
    ull temp = 1 << m;
    while (n  < temp)
    {
        temp = temp >> 1;
        m--;
    }
    return m;
}

// The main recursive function used by countSetBits()
ull _countSetBits(ull n, ll m);

// Returns count of set bits present in all numbers from 1 to n
ull countSetBits(ull n)
{
    // Get the position of leftmost set bit in n. This will be
    // used as an upper bound for next set bit function
    ll m = getLeftmostBit (n);

    // Use the position
    return _countSetBits (n, m);
}

ull _countSetBits(ull n, ll m)
{
    // Base Case: if n is 0, then set bit count is 0
    if (n == 0)
        return 0;

    /* get position of next leftmost set bit */
    m = getNextLeftmostBit(n, m);

    // If n is of the form 2^x-1, i.e., if n is like 1, 3, 7, 15, 31,.. etc,
    // then we are done.
    // Since positions are considered starting from 0, 1 is added to m
    if (n == ((ull)1<<(m+1))-1)
        return (ull)(m+1)*(1<<m);

    // update n for next recursive call
    n = n - (1<<m);
    return (n+1) + countSetBits(n) + m*(1<<(m-1));
}

// Driver program to test above functions
int main()
{

    int t=1;

    ll a,b;

    while(scanf("%lld %lld",&a,&b))
    {

        if(a==0&&b==0)
            break;

        if(a==0)
            a++;

        printf ("Case %d: %lld\n",t++,countSetBits(b)-countSetBits(a-1));
    }

    return 0;
}
