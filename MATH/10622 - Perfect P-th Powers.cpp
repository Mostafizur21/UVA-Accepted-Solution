#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long input,i,k,m,n;

    vector<long long>v;

    while(cin>>input && input)
    {
        v.clear();

        n = abs(input);

        if(n%2==0)
        {
            m=0;

            while(n%2==0)
            {
                m++;

                n /= 2;

            }

            v.push_back(m);
        }

        for(i = 3; i*i<=n; i++)
        {
            m = 0;

            if(n%i==0)
            {
                while(n%i==0)
                {
                    m++;

                    n /= i;

                }
                v.push_back(m);
            }
        }

        if(n>1)
            v.push_back(1);

        sort(v.begin(),v.end());

        if(input>0)
            cout<<v[0]<<endl;

        if(input<0)
        {
            if(v[0]%2!=0)
                cout<<v[0]<<endl;

            else
            {
                k = v[0];

                while(k%2==0)
                {
                    k /= 2;
                }

                cout<<k<<endl;
            }
        }

    }

    return 0;
}
