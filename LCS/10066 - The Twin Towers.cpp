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

int m,n,dp[101][101];
int v1[101],v2[101];
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
    int x,i,ans,k=1;

    while(cin>>m>>n)
    {
        if(m==0&&n==0)
            break;

        for(i=0;i<m;i++)
        {
            cin>>x;
            v1[i]=x;
        }
        for(i=0;i<n;i++)
        {
            cin>>x;
            v2[i]=x;
        }
        memset(dp,-1,sizeof(dp));
        ans=lcs(0,0);
        cout<<"Twin Towers #"<<k++<<endl;
        cout<<"Number of Tiles : "<<ans<<endl;
        cout<<endl;
    }
    return 0;
}
