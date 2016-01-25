#include<bits/stdc++.h>

using namespace std;

long long solve(long long n)
{
    if(n==0)
        return 0;
    return solve(n/2)+(n%2);
}

int main()
{

    long long T,n;

    cin>>T;

    while(T--)
    {
        cin>>n;

        cout<<solve(n)<<endl;

    }

    return 0;
}
