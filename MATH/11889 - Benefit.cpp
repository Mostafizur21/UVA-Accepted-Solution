#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

long long lcm(long long a, long long b)
{
    return (a * (b / gcd(a, b)));
}

int main()
{
    long long test,A,C,B,m,n;

    cin>>test;

    while(test--)
    {
        cin>>A>>C;

        B = 10000000000;

        m = C;

        int check=0;

        for(int i=1; i*i<=m; i++)
        {
            if(m%i==0)
            {
                int n = m/i;

                if(lcm(i,A)==C)
                {
                    if(i<B)
                        B=i;

                    check=1;
                }

                if(lcm(n,A)==C)
                {
                    if(n<B)
                        B=n;

                    check=1;
                }
            }
        }

        if(check)
            cout<<B<<endl;

        else
            cout<<"NO SOLUTION"<<endl;

    }

    return 0;
}
