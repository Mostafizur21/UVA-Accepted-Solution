#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

int n;

int dp[25][105];

int weight[25];

int cost[25];

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
    int test,input,index,in,y,sum;

    string s;

    char ch[10];

    cin>>test;

    getchar();

    while(test--)
    {
        sum = index = 0;

        getline(cin,s);

        in = 0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='0'&&s[i]<='9')

                ch[in++] = s[i];

            else
            {
                index++;

                ch[in] = '\0';

                input = atoi(ch);

                in = 0;

                weight[index] = input;

                cost[index]  = input;

                sum += input;
            }

        }

        if(in)
        {
            index++;

            ch[in] = '\0';

            input = atoi(ch);

            weight[index] = input;

            cost[index]  = input;

            sum += input;
        }

        if(sum%2!=0)

            cout<<"NO"<<endl;

        else
        {
            CAP = sum/2;

            n = index;

            memset(dp,-1,sizeof(dp));

            y=func(1,0);

            if(y==CAP)

                cout<<"YES"<<endl;

            else

                cout<<"NO"<<endl;
        }

    }

    return 0;

}
