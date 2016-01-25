/*
http://math.stackexchange.com/questions/301151/how-to-find-how-many-number-has-even-value-of-sigma-function
*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ll n;

    while(scanf("%lld",&n)&&n)
    {

        ll x = sqrt(n);

        ll y = sqrt(n/2);

        printf("%lld\n",n-x-y);

    }

    return 0;
}
