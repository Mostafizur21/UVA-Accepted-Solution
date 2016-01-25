//*****Accepted******//
#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int GCD(int a,int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    int G=0,i,j,N;
    while(scanf("%d",&N)!=EOF)
    {
        G=0;
        if(N==0)
            break;
        for(i=1;i<N;i++)
        {
            for(j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
        }
        cout<<G<<endl;
    }
    return 0;
}
