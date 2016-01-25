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

using namespace std;

int main()
{
    int test,i,x,y,z,M,E,j,k,m,n;
    char ch[51];
    scanf("%d",&test);
    getchar();
    for(i=1;i<=test;i++)
    {
        x=M=y=E=z=0;
        gets(ch);
        for(j=0;ch[j]!='\0';j++)
        {
            if(ch[j]=='?'&&M==0)
                x++;
            else if(ch[j]=='M')
                M++;
            else if(M>0&&ch[j]=='?'&&E==0)
                y++;
            else if(ch[j]=='E')
                E++;
            else if(ch[j]=='?')
                z++;
        }
        if(M==1&&E==1&&(y==z-x)&&x>0&&y>0&&z>1)
            printf("theorem\n");
        else
            printf("no-theorem\n");
    }
    return 0;
}
