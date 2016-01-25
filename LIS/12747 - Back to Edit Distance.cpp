#include<bits/stdc++.h>

using namespace std;

int pos[200000+5],arr[200000+5],N;

int dp[200000+5];

int lis()
{
    int mxLen = 1;

    dp[0] = arr[0];

    for(int i=0; i<N; i++)
    {
        int curr = arr[i] , last = dp[ mxLen - 1 ] ;
        if ( last < curr )
        {
            dp[ mxLen++ ] = curr;

        }
        else if( last > curr )
        {
            int *pos = lower_bound(dp , dp + mxLen , curr) ;
            if( *pos > curr) *pos = curr;

        }

    }
    return mxLen ;

}

int main()
{
    int T,i,j,k;

    cin>>T;

    for(i=1; i<=T; i++)
    {
        cin>>N;

        for(j=0; j<N; j++)
        {
            int x;

            cin>>x;

            pos[x] = j;
        }

        for(j=0; j<N; j++)
        {
            int x;

            cin>>x;

            arr[j] = pos[x];

        }

        cout<<"Case "<<i<<": "<<(2*(N-lis()))<<endl;

    }

    return 0;
}
