#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,m,n,fac[10000+5];

    cin>>test;

    for(int t = 1; t<=test; t++)
    {
        cin>>m>>n;

        vector<int>v;

        memset(fac,0,sizeof(fac));

        for(int i = 2; i <=n; i++)
        {

            int j = i;

            if(j%2==0)
            {
                while(j%2==0)
                {
                    fac[2]++;

                    j /=2;
                }
            }

            for(int k=3; k*k<=j; k+=2)
            {
                if(j%k==0)
                {
                    while(j%k==0)
                    {
                        fac[k]++;

                        j /=k;
                    }
                }
            }

            if(j>1)
                fac[j]++;

        }

        int total = 0;

        if(m%2==0)
        {
            while(m%2==0)
            {
                m /=2;

                total++;
            }

            v.push_back(fac[2]/total);
        }

        for(int k=3; k*k<=m; k+=2)
        {
            if(m%k==0)
            {
                total = 0;
                while(m%k==0)
                {
                    total++;

                    m /=k;
                }

                v.push_back(fac[k]/total);
            }
        }

        if(m>1)
            v.push_back(fac[m]);

        sort(v.begin(),v.end());


        cout<<"Case "<<t<<":"<<endl;

        if(v[0]>0)

            cout<<v[0]<<endl;

        else

            cout<<"Impossible to divide"<<endl;

    }

    return 0;


}
