#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    string a;
    char input[100];
     unsigned long int i,j,k,m,n,test,len,arr[100],b,c,d,e,result,f,g,h,p;
    while(scanf("%lu",&test)!=EOF)
    {
        getchar();
        for(i=1;i<=test;i++)
        {
             g=1;
             m=1;
             n=0;
            result=1;
            gets(input);
            len=strlen(input);
            a=string(input);
            sort(a.begin(),a.end());
            p=a.size();
            for(k=0;k<p-1;k++)
            {
                if(a[k]==a[k+1])
                {
                     m++;
                }
                else if(a[k]!=a[k+1]&&m>1)
                   {
                       arr[n++]=m;
                       m=1;
                   }
            }
            if(m>1)
                arr[n++]=m;
            for(b=1;b<=len;b++)
            {
                result=result*b;
            }
            if(n>0)
            {
                for(c=0;c<n;c++)
               {
                d=arr[c];
                  f=1;
                for(e=1;e<=d;e++)
                {
                    f=f*e;
                }
                g=g*f;
               }
            }
            h=result/g;
            cout<<"Data set "<<i<<": "<<h<<endl;
        }
    }
    return 0;
}
