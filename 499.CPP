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
    char ch[55],c,s[100000];
    int frequency,i,j,k,m,n,cnt;
    while(gets(s))
    {
        frequency=0;
        n=0;
        for(i=0;i<52;i++)
        {
            cnt=0;
            if(i>25)
                c=71+i;
            else
                c=65+i;
            for(j=0;s[j]!='\0';j++)
            {
                if(s[j]==c)
                    cnt++;
            }
            if(cnt==frequency)
            {
                frequency=cnt;
                ch[n++]=c;
            }
            if(cnt>frequency)
            {
                frequency=cnt;
                n=0;
                ch[n++]=c;
            }
        }
        ch[n]='\0';
        cout<<ch<<" "<<frequency<<endl;
    }
    return 0;
}
