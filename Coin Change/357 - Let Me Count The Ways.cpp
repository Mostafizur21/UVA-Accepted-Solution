#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<utility>
#include<complex>
#include<stack>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<deque>
#include<list>
#include<stdexcept>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<ctime>

using namespace std;

int main()
{
    long long int dp[30001],coin[5],i,j,input,k;
    coin[0]=1;
    coin[1]=5;
    coin[2]=10;
    coin[3]=25;
    coin[4]=50;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(i=0;i<5;i++)
    {
        for(j=coin[i];j<30001;j++)
        {
            dp[j]=dp[j]+dp[j-coin[i]];
        }
    }
    while(scanf("%lld",&input)!=EOF)
    {
        k=dp[input];
        if(k==1)
            printf("There is only 1 way to produce %lld cents change.\n",input);
        else
            printf("There are %lld ways to produce %lld cents change.\n",k,input);
    }
    return 0;
}

