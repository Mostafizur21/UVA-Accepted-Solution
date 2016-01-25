#include <bits/stdc++.h>

using namespace std;

string str1[105],str2[105];

int m,n;

int dp[105][105],direction[105][105];

bool check;

int LCS()
{
    for(int i=0; i<=m; i++)

        dp[i][0] = 0;

    for(int i=1; i<=n; i++)

        dp[0][i] = 0;

    for(int i = 1; i<=m; i++)
    {

        for(int j=1; j<=n; j++)
        {
            if(str1[i]==str2[j])
            {
                dp[i][j] = dp[i-1][j-1]+1;

                direction[i][j] = 1;

            }

            else if(dp[i][j-1]>dp[i-1][j])
            {
                dp[i][j] = dp[i][j-1];

                direction[i][j] = 2;
            }

            else
            {
                dp[i][j] = dp[i-1][j];

                direction[i][j] = 3;
            }
        }
    }
}

int print(int x,int y)
{
    if(x==0||y==0)

        return 0;

    if(direction[x][y]==1)
    {
        print(x-1,y-1);

        if(check)

            cout<<" "<<str1[x];

        else

            cout<<str1[x];

        check = true;
    }

    else if(direction[x][y]==2)

        print(x,y-1);

    else

        print(x-1,y);
}

int main()
{
    string s;

    char ch[35];

    while(getline(cin,s))
    {

        m = n =0;

        int len = s.size();

        int in = 0;

        for(int i=0; i<len; i++)
        {
            if(s[i]==' ')
            {
                ch[in] = '\0';

                str1[++m] = ch;

                in = 0;
            }

            else
            {
                ch[in++] = s[i];
            }
        }

        if(in)
        {
            ch[in] = '\0';

            str1[++m] = ch;

            in = 0;
        }

        while(getline(cin,s))
        {

            if(s=="#")
                break;

            int len = s.size();

            int in = 0;

            for(int i=0; i<len; i++)
            {
                if(s[i]==' ')
                {
                    ch[in] = '\0';

                    str1[++m] = ch;

                    in = 0;
                }

                else
                {
                    ch[in++] = s[i];
                }
            }

            if(in)
            {
                ch[in] = '\0';

                str1[++m] = ch;

                in = 0;
            }
        }


        while(getline(cin,s))
        {

            if(s=="#")
                break;

            int len = s.size();

            int in = 0;

            for(int i=0; i<len; i++)
            {
                if(s[i]==' ')
                {
                    ch[in] = '\0';

                    str2[++n] = ch;

                    in = 0;
                }

                else
                {
                    ch[in++] = s[i];
                }
            }

            if(in)
            {
                ch[in] = '\0';

                str2[++n] = ch;

                in = 0;
            }
        }

        LCS();

        check =false;

        print(m,n);

        cout<<endl;

    }

    return 0;
}
