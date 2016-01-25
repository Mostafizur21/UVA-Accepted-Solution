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
    char ch[26],c,d,s[201];
    int frequency,i,j,test,m,n,cnt;
    scanf("%d",&test);
    getchar();
    for(m=1;m<=test;m++)
    {
        gets(s);
        {
            frequency=0;
            n=0;
            for(i=0;i<26;i++)
            {
                cnt=0;
                c=97+i;
                d=65+i;
                for(j=0;s[j]!='\0';j++)
                {
                    if(s[j]==c||s[j]==d)
                        cnt++;
                }
                if(cnt>=frequency)
                {
                    if(cnt>frequency)
                        n=0;
                    frequency=cnt;
                    ch[n++]=c;
                }
            }
            ch[n]='\0';
            cout<<ch<<endl;
        }
    }
    return 0;
}
