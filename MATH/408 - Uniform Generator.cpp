#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

int main()
{
    int STEP,MOD,m;

    while(cin>>STEP>>MOD)
    {
        m = gcd(STEP,MOD);

        if(m==1)
            printf("%10d%10d    Good Choice\n\n",STEP,MOD);

        else
            printf("%10d%10d    Bad Choice\n\n",STEP,MOD);

    }

    return 0;
}
