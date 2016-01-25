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
    int i,j,k,m,n,row,column,cunt,test=1;
    char input[101][101];
    while(scanf("%d %d",&row,&column))
    {
        if(row==0&&column==0)
            break;
        getchar();
        if(test>1)
            printf("\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                cin>>input[i][j];
            }
        }
        printf("Field #%d:\n",test++);
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                cunt=0;
                if(input[i][j]=='*')
                   cout<<input[i][j];
                else
                {
                    if(input[i][j+1]=='*'&&j+1<column)
                        cunt++;
                    if(input[i][j-1]=='*'&&j>0)
                        cunt++;
                    if(input[i+1][j-1]=='*'&&j>0&&i+1<row)
                        cunt++;
                    if(input[i+1][j]=='*'&&i+1<row)
                        cunt++;
                    if(input[i+1][j+1]=='*'&&i+1<row&&j+1<column)
                        cunt++;
                    if(input[i-1][j-1]=='*'&&i>0&&j>0)
                        cunt++;
                    if(input[i-1][j]=='*'&&i>0)
                        cunt++;
                    if(input[i-1][j+1]=='*'&&i>0&&j+1<column)
                        cunt++;
                    printf("%d",cunt);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
