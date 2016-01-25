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
#define MAX 100000000

char ch[MAX],ch1[MAX];

using namespace std;

int main()
{
    int i,j,m,n,cnt;
    char *p;
    while(gets(ch))
    {
        cnt=0;
        p=ch;
        while(1)
        {
            n=m=0;
            cnt++;
            for(i=0;p[i]!='\0';i++)
            {
                if(p[i]==' '&&p[i+1]==' ')
                {
                    ch1[n++]=' ';
                    m=1;
                    i++;
                }
                else
                   ch1[n++]=p[i];
            }
            if(m==0)
                break;
            ch1[n]='\0';
            p=ch1;
        }
        printf("%d\n",--cnt);
    }
    return 0;
}
