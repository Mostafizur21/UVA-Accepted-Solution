//give negetive result for 100 70

#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<utility>
#include<complex>
#include<stack>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<deque>
#include<list>
#include<stdexcept>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<ctime>

using namespace std;

long long gcd(long long a,long long b)
{
    if (a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
void Divbygcd(long long& a,long long& b)
{
    long long g=gcd(a,b);
    a/=g;
    b/=g;
}
long long Combinations(long long n,long long k)
{
    long long numerator=1,denominator=1,toMul,toDiv,i;
    if (k>n/2)
        k=n-k; /* use smaller k */
    for (i=k; i; i--)
    {
        toMul=n-k+i;
        toDiv=i;
        Divbygcd(toMul,toDiv); /* always divide before multiply */
        Divbygcd(numerator,toDiv);
        Divbygcd(toMul,denominator);
        numerator*=toMul;
        denominator*=toDiv;
    }
    return numerator/denominator;
}

int main()
{
    long long N,M;
    long long C;
    while(scanf("%lld %lld",&N,&M))
    {
        if(N==0&&M==0)
            break;
        C=Combinations(N,M);
        cout<<N<<" things taken "<<M<<" at a time is "<<C<<" exactly."<<endl;
    }
    return 0;
}
