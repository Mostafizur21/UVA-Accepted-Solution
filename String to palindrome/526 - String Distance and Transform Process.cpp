#include<bits/stdc++.h>

using namespace std;

int dp[85][85],cnt,tmp=0;

string x,y;

int solve(int m,int n)
{
    int i,j,left,top,corner;

    for(i=0; i<=m; i++)
        dp[i][0] = i;

    for(i=0; i<=n; i++)
        dp[0][i] = i;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            left = dp[i][j-1]+1;  //an insertion

            top = dp[i-1][j]+1;  // a deletion

            corner = dp[i-1][j-1]+(x[i-1]==y[j-1]?0:1); // a substitution if x[i-1]!=y[j-1]

            dp[i][j] = min(left,min(top,corner));

        }

    }

    return dp[m][n];
}


void operation(int i,int j)
{

    if(i==0&&j==0)
        return;

    else
    {

        if(dp[i][j]==dp[i-1][j-1]&&x[i-1]==y[j-1]&&i>0&&j>0)
        {
            operation(i-1,j-1);

        }

        else if(dp[i][j]==dp[i-1][j-1]+1&&x[i-1]!=y[j-1]&&i>0&&j>0)
        {
            operation(i-1,j-1);

            cout<<cnt++<<" Replace "<<i-tmp<<","<<y[j-1]<<endl;
        }

        else if(dp[i][j]==dp[i][j-1]+1&&j>0)
        {
            operation(i,j-1);

            cout<<cnt++<<" Insert "<<j<<","<<y[j-1]<<endl;

            tmp--;
        }

        else if(dp[i][j]==dp[i-1][j]+1&&i>0)
        {
            operation(i-1,j);
            cout<<cnt++<<" Delete "<<i-(tmp++)<<endl;
        }

    }

}

int main()
{

    int m,n,check=0;

    while(getline(cin,x))
    {
        getline(cin,y);


        if(check)
            cout<<endl;

        check = 1;


        tmp=0;

        m = x.size();

        n = y.size();

        cout<<solve(m,n)<<endl;

        cnt=1;

        operation(m,n);

    }

    return 0;
}
