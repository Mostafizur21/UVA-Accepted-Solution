#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N,sum,cas=1,m,n,k;

    while(cin>>N && N)
    {
        sum = 0;

        if(N==1)
            sum++;

        n = N;

        k=1;

        if(N%2==0)
        {
            while(N%2==0)
            {
                k = k*2;
                N/=2;
            }

            sum+=k;

            k=1;
        }

        if(N==1)
            sum++;

        else
        {
            for(m=3; m*m<=N; m+=2)
            {
                if(N%m==0)
                {
                    while(N%m==0)
                    {
                        k = k*m;
                        N/=m;
                    }

                    sum+=k;
                    k=1;
                }
            }

            if(N!=1)
                sum+=N;

            if(N==n)
                sum++;

        }

        cout<<"Case "<<cas++<<": "<<sum<<endl;

    }

    return 0;
}
