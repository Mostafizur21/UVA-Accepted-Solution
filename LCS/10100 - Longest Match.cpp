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

using namespace std;

string  v1[1001],v2[1001];

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
    int x,i,ans,k=1,p,y,z,len1,len2;
    string s1,s2;
    char c[21];
    while(getline(cin,s1))
    {
        p=y=z=0;
        getline(cin,s2);
        len1=s1.size();
        len2=s2.size();
        if(len1==0||len2==0)
            printf("%2d. Blank!\n",k);
        else
        {
            for(int a=0; a<s1.size(); a++)
            {
                if((s1[a]>='A'&&s1[a]<='Z')||(s1[a]>='a'&&s1[a]<='z')||(s1[a]>='0'&&s1[a]<='9'))
                    c[p++]=s1[a];
                else
                {
                    if(p!=0)
                    {
                        c[p]='\0';
                        v1[y++]=c;
                        p=0;
                    }
                }
            }
            if(p!=0)
            {
                c[p]='\0';
                p=0;
                v1[y++]=c;
            }

            for(int a=0; a<s2.size(); a++)
            {
                if((s2[a]>='A'&&s2[a]<='Z')||(s2[a]>='a'&&s2[a]<='z')||(s2[a]>='0'&&s2[a]<='9'))
                    c[p++]=s2[a];
                else
                {
                    if(p!=0)
                    {
                        c[p]='\0';
                        v2[z++]=c;
                        p=0;
                    }
                }
            }
            if(p!=0)
            {
                c[p]='\0';
                p=0;
                v2[z++]=c;
            }
            m=y;
            n=z;
            memset(dp,-1,sizeof(dp));
            ans=lcs(0,0);
            printf("%2d. Length of longest match: %d\n",k,ans);
        }
        k++;
    }
    return 0;
}
