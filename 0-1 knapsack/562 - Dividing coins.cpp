#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#define MAX_N 101
#define MAX_W 25005

using namespace std;

int n;

int dp[MAX_N+1][MAX_W+1];

int weight[MAX_N+1];

int cost[MAX_N+1];

int CAP;

int func(int i,int w)
{
    if(i==n+1)
        return 0;

    if(dp[i][w]!=-1)
        return dp[i][w];

    int profit1=0,profit2=0;

    if(w+weight[i]<=CAP)
        profit1=cost[i]+func(i+1,w+weight[i]);

    profit2=func(i+1,w);

    dp[i][w]=max(profit1,profit2);

    return dp[i][w];
}

int main()
{
    int test,sum,x,y;

    scanf("%d",&test);

    for(int m=1; m<=test; m++)
    {
        y=0;

        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            cin>>x;

            cost[i]=x;

            weight[i]=x;

            y+=x;
        }

        CAP=y/2;

        memset(dp,-1,sizeof(dp));

        sum=func(1,0);

        cout<<(y-(2*sum))<<endl;

    }

}
