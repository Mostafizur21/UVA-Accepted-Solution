#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

int main()
{
    long long input,m,n,i,s,p;

    while(cin>>input)
    {

        m = n = input;

        s = 0;

        for(i = 2; i*i<=m; i++)//for 1 and m 1 added here as gcd of 1 and m is 1
        {

            if(m%i==0)
            {

                while(m%i==0)
                {
                    m/=i;
                }

                n-=n/i;
            }

        }

        if(m>1)
            n-=n/m;

        m = input;

        for(i=1; i*i<=m; i++)//again 1 added as gcd of 1 and m is 1
        {
            if(m%i==0)
            {
                if(i*i==m)
                {
                    p = gcd(i,m);

                    if(p==i)
                        s++;

                }

                else
                {
                    p = gcd(i,m);

                    if(p==i)
                        s++;

                    p = gcd(m/i,m);

                    if(p==m/i)
                        s++;
                }

            }
        }

        //the sum of s and n is the total number which gcd 1 or m as the description of the problem
        //so just subtruct the sum of s nad n from the input we get the result

        long long result = input-s-n+1;//as 1 include two times so 1 added here


        if(result>0)

            cout<<result<<endl;

        else
            cout<<"0"<<endl;

    }

    return 0;
}
