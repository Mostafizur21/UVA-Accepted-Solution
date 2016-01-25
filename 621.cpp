#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int test,i,j,k,m,n,len;
    string input;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            cin>>input;
             len=input.size();
            if(input=="1"||input=="4"||input=="78")
                printf("+\n");
            else if(input[len-1]=='5'&&input[len-2]=='3')
                printf("-\n");
            else if(input[0]=='9'&&input[len-1]=='4')
                printf("*\n");
            else if(input[0]=='1'&&input[1]=='9'&&input[2]=='0')
                printf("?\n");
        }
    }
    return 0;
}
