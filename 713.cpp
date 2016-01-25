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
#define MAX 210
char c[MAX];
using namespace std;

int main()
{
    char carry;
    string a,b,e,f,g;
    int i,j,k,l,m,n,len1,len2,test,q,P;
    scanf("%d",&test);
    for(int I=1;I<=test;I++)
    {
        cin>>e>>f;
        q=0;
        carry='0';
        len1=e.size();
        len2=f.size();
        a=e;
        b=f;
        k=0;
        if(len2<len1)
        {
            for(i=0;i<len2;i++)
            {
                m=a[i]+b[i]+carry-96;
                if(m>57)
                {
                    carry='1';
                    c[k++]=m-10;

                }
                else
                {
                    carry='0';
                    c[k++]=m;
                }
            }
            for(i=len2;i<len1;i++)
            {
                m=a[i]+carry-48;
                if(m>57)
                {
                    carry='1';
                    c[k++]=m-10;

                }
                else
                {
                    carry='0';
                    c[k++]=m;
                }
            }
            if(carry=='1')
                c[k++]='1';
        }
        else
        {
            for(i=0;i<len1;i++)
            {
                m=a[i]+b[i]+carry-96;
                if(m>57)
                {
                    carry='1';
                    c[k++]=m-10;

                }
                else
                {
                    carry='0';
                    c[k++]=m;
                }
            }
            for(i=len1;i<len2;i++)
            {
                m=b[i]+carry-48;
                if(m>57)
                {
                    carry='1';
                    c[k++]=m-10;

                }
                else
                {
                    carry='0';
                    c[k++]=m;
                }
            }
            if(carry=='1')
                c[k++]='1';
        }
        c[k]='\0';
        g=c;
        for(P=0;P<g.size();P++)
        {
            if(g[P]=='0')
                continue;
            else
                break;
        }
        for(int z=P;z<g.size();z++)
            cout<<g[z];
        cout<<endl;
    }
    return 0;
}
