#include <bits/stdc++.h>

using namespace std;

long long  phi (long long  n)
{
    long long  ret = n;

    for (long long  i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {

            while (n % i == 0)
            {

                n /= i;

            }

            ret -= ret / i;

        }

    }
    // this case will happen if n is a prime number
    // in that case we won't find any prime that divides n
    // that's less or equal to sqrt(n)

    if (n > 1)
        ret -= ret / n;

    return ret;
}

int main()
{
    long long n;

    while(cin>>n && n)
    {
        if(n==1)
            cout<<n-1<<endl;

        else
            cout<<phi(n)<<endl;

    }

    return 0;
}
