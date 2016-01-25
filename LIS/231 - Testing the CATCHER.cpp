#include<iostream>
#include<cstdio>
#include<cstring>
#define mx 10000
using namespace std;

int dp[mx],n,value[mx],cases=1;

int longest(int u)
{
    if(dp[u]!=-1) return dp[u];
    int maxi=0;
    for(int v=u+1;v<n;v++)
    {
        if(value[v]<=value[u])
        {
            if(longest(v)>maxi)
            {
                maxi=longest(v);
            }
        }
    }
    dp[u]=1+maxi;
    return dp[u];
}

int main()
{
    for(; ;)
    {
        n=0;
        cin>>value[0];
            if(value[0]==-1)
                break;

        for(int j=1;;j++)
        {
            n++;
            cin>>value[j];
            if(value[j]==-1)
                break;
        }
        memset(dp,-1,sizeof dp);
        int LIS=0;
        for(int i=0;i<n;i++)
        {
            if(longest(i)>LIS)
            {
                LIS=longest(i);
            }
        }
        if(cases>1)
            printf("\n");
        printf("Test #%d:\n  maximum possible interceptions: %d\n",cases++,LIS);
    }
    return 0;
}
