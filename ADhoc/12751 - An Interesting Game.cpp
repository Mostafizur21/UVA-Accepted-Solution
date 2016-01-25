#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,N,K,X;

    cin>>test;

    for(int i=1; i<=test; i++)
    {

        cin>>N>>K>>X;

        cout<<"Case "<<i<<": "<<(N*(N+1))/2-((K+X-1)*(K+X))/2+(X*(X-1))/2<<endl;

    }

    return 0;
}
