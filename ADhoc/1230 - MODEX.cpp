#include<bits/stdc++.h>
#define ll long long

ll mod;

using namespace std;

ll power(ll x,ll y)
{

    if(y==0)
        return 1;

    if(y%2==0)
    {
        ll ret = power(x,y/2);

        return ((ret%mod)*(ret%mod))%mod;
    }

    else
        return (x%mod*power(x,y-1)%mod)%mod;

}


int main()
{

    ll x,y;

    int t;

    cin>>t;

    while(t--)
    {
        cin>>x>>y>>mod;

        cout<<power(x,y)<<endl;

    }

    cin>>t;

    return 0;

}
