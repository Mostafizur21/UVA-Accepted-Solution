#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#define base 26
using namespace std;

int main()
{
    string a;
    char ch[100],integer[100];
    int test,i,j,k,m,n,p,q,r,s,len;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            m=0;
            n=0;
            cin>>a;
            r=0;
            for(j=0;j<a.size();j++)
            {
                if(j<3)
                    ch[m++]=a[j];
                if(j>3)
                    integer[n++]=a[j];
            }
            ch[m]='\0';
            integer[n]='\0';
            k=atoi(integer);
            len=strlen(ch);
            s=len-1;
            for(p=0;ch[p]!='\0';p++)
            {
                q=ch[p]-65;
                r=r+q*(pow(base,s));
                s--;
            }
            r=r-1;
            if(abs(r-k)<=100)
                printf("nice\n");
            else
                printf("not nice\n");
        }
    }
    return 0;
}
