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
    long long int dp[30001],coin[11],i,j,k;
    float input;
    coin[0]=5;
    coin[1]=10;
    coin[2]=20;
    coin[3]=50;
    coin[4]=100;
    coin[5]=200;
    coin[6]=500;
    coin[7]=1000;
    coin[8]=2000;
    coin[9]=5000;
    coin[10]=10000;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(i=0;i<11;i++)
    {
        for(j=coin[i];j<30001;j=j+5)
        {
            dp[j]=dp[j]+dp[j-coin[i]];
        }
    }
    while(scanf("%f",&input))
    {
        if(input==0.00)
            break;
        k=(int)(input*100+.5);
        printf("%6.2f%17lld\n",input,dp[k]);
    }
    return 0;
}
