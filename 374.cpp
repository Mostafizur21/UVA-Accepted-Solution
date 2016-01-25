#include<iostream>

using namespace std;
long square(long x)
{
    return x*x;
}
long bigmod(long b,long p,long m)
{
    if (p == 0)
        return 1;
    else if (p%2 == 0)
        return square(bigmod(b,p/2,m)) % m; // square(x) = x * x
    else
        return ((b % m) * bigmod(b,p-1,m)) % m;
}

int main()
{
    long B,P,M;
    while(cin>>B>>P>>M)
    {
        cout<<bigmod(B,P,M)<<endl;
    }
    return 0;
}
