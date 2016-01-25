#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
    char a[10000],b[10000],c[10000];
    int i,j,k,m,n;
    while(gets(a))
    {
        j=0;
        k=0;
        n=0;
        for(i=0;a[i]!='\0';i++)
        {

             if(a[i]!=' ')
                b[k++]=a[i];

            else
            {
                b[k]='\0';
                for(m=k-1;m>=0;m--)
                    c[n++]=b[m];
                if(a[i]==' ')
                c[n++]=' ';
                k=0;
            }
        }
        b[k]='\0';
       for(m=k-1;m>=0;m--)
            c[n++]=b[m];
        if(a[i]==' ')
        c[n++]=' ';
        c[n]='\0';
        puts(c);
    }
    return 0;
}
