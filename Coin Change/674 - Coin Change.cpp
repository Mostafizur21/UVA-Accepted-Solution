#include<bits/stdc++.h>

using namespace std;

int main()
{
    int dp[7490],coin[5],i,j,input;

    coin[0]=1;

    coin[1]=5;

    coin[2]=10;

    coin[3]=25;

    coin[4]=50;

    memset(dp,0,sizeof(dp));

    dp[0]=1;

    for(i=0; i<5; i++)
    {
        for(j=coin[i]; j<7490; j++)
        {
            dp[j]=dp[j]+dp[j-coin[i]];

        }
    }

    while(scanf("%d",&input)!=EOF)
    {

        printf("%d\n",dp[input]);

    }

    return 0;
}

