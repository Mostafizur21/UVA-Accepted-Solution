#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<vector>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<set>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<sstream>
#include<utility>
#include<complex>
#include<cstring>

int m,n,dp[1001][1001];
char  v1[1001],v2[1001];
using namespace std;

int lcs(int x,int y)
{
    if(x==m||y==n)
        return 0;
    if(dp[x][y]!=-1)
        return dp[x][y];
    if(v1[x]==v2[y])
        dp[x][y]=lcs(x+1,y+1)+1;
    else
        dp[x][y]=max(lcs(x+1,y),lcs(x,y+1));
    return dp[x][y];
}

int main()
{
    int x,i,ans,k,p=1;
    while(gets(v1))
    {
        k=strcmp(v1,"#");
        if(k==0)
            break;
        gets(v2);
        m=strlen(v1);
        n=strlen(v2);
        memset(dp,-1,sizeof(dp));
        ans=lcs(0,0);
        cout<<"Case #"<<p++<<": you can visit at most "<<ans<<" cities."<<endl;
    }
    return 0;
}
