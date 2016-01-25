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
    char c[300],carry;
    string a,b,d[1005],e,f,g,h;
    e='0';
    f='1';
    int i,j,k,l,m,n,len1,len2,input;
//    freopen("output.txt", "w", stdout);
    for(j=0; j<=1000; j++)
    {
        carry='0';
        len1=e.size();
        len2=f.size();
        a=e;
        b=f;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        k=0;
        if(len2<len1)
        {
            for(i=0; i<len2; i++)
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
            for(i=len2; i<len1; i++)
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
            for(i=0; i<len1; i++)
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
            for(i=len1; i<len2; i++)
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
        reverse(g.begin(),g.end());
        d[j]=g;
//        cout<<d[j]<<endl;
        e=f;
        f=d[j];
    }
    while(scanf("%d",&input)!=EOF)
    {
        cout<<d[input]<<endl;
    }
    return 0;
}
