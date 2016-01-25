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
#define MAX 1000000

char ch[MAX];

using namespace std;

int main()
{
    int i,j,k,m,n;
    while(gets(ch))
    {
        m=0;
        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]>='1'&&ch[i]<='9')
                m+=ch[i]-48;
            else if(ch[i]=='b')
            {
                for(j=0;j<m;j++)
                {
                    printf(" ");
                }
                m=0;
            }
            else if(ch[i]=='!')
                printf("\n");
            else
            {
                for(k=0;k<m;k++)
                    printf("%c",ch[i]);
                    m=0;
            }
        }
        printf("\n");
    }
    return 0;
}
