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
    long long int dp[10000],coin[21],i,j,k,input;
    for(i=1;i<=21;i++)
    {
        coin[i-1]=i*i*i;
    }
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(i=0;i<21;i++)
    {
        for(j=coin[i];j<10000;j++)
        {
            dp[j]=dp[j]+dp[j-coin[i]];
        }
    }
    while(scanf("%lld",&input)!=EOF)
    {
        printf("%lld\n",dp[input]);
    }
    return 0;
}
