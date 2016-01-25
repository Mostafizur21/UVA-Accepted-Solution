#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long N,i,j,m;
    while(cin>>N)
    {
        vector<long long>v;

        v.clear();

        if(N<0)
            break;

        m = N;

        while(m%2==0)
        {
            v.push_back(2);
            m/=2;
        }

        for(j=3; j*j<=m; j+=2)
        {

            while(m%j==0)
            {
                v.push_back(j);
                m/=j;
            }
        }
        if(m!=1)
            v.push_back(m);

        for(i=0; i<v.size(); i++)
        {
            cout<<"    "<<v[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
