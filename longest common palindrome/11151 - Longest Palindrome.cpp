#include<bits/stdc++.h>
using namespace std;

string s;

int dp[1005][1005];

int palindrome(int i,int j)
{
    if(dp[i][j]!=-1)

        return dp[i][j];

    if(i==j)

        return 1;

    else if((s[i]==s[j])&&(i+1==j))

        return 2;

    else if(s[i]==s[j])

        return dp[i][j] = 2+palindrome(i+1,j-1);

    else

        return dp[i][j] = max(palindrome(i+1,j),palindrome(i,j-1));

}

int main()
{
    int test;

    scanf("%d",&test);

    getline(cin,s);

    while(test--)
    {
        getline(cin,s);

        int len = s.size();

        if(len==0)
        {
            cout<<"0"<<endl;

            continue;
        }

        memset(dp,-1,sizeof(dp));

        cout<<palindrome(0,len-1)<<endl;

    }

    return 0;
}
