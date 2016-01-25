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
#define MAX 1046
char c[MAX];
using namespace std;

int main()
{
    char carry;
    string a,b,d[5001],e,f,g;
    int i,j,k,l,m,n,len1,len2,input,x=0;
   while(cin>>f)
   {
       if(f=="0")
       {
           cout<<e<<endl;
           return 0;
       }
         if(x==0)
         e=f;
         x++;
         if(x>1)
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
        reverse(g.begin(),g.end());
        e=g;
    }
   }
    return 0;
}
