#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,m,sum=0;

    vector<int>arr;

    for(i=2; i<=1000000 ; i++)
    {
        m = i;
        while(m%2==0)
        {
            sum++;
            m/=2;

        }

        for(j=3; j*j<=m; j+=2)
        {
            while(m%j==0)
            {
                sum++;
                m/=j;
            }
        }
        if(m!=1)
            sum++;
        arr.push_back(sum);
    }

    int n;
    while(cin>>n)
    {
        cout<<arr[n-2]<<endl;
    }
    return 0;
}
