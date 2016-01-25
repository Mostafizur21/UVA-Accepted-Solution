#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char a[10000],b[10000],c[10000],d[]="DONE";
    int i,j,k,m,n,p;
    while(gets(a))
    {
        p=strcmp(a,d);
        if(p==0)
            break;
        k=0;
        j=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>=65&&a[i]<=90)
             b[j++]=a[i];
            else if(a[i]>=97&&a[i]<=122)
                b[j++]=a[i]-32;
        }
        b[j]='\0';
        for(m=j-1;m>=0;m--)
        {
            c[k++]=b[m];
        }
        c[k]='\0';
        n=strcmp(b,c);
        if(n==0)
            cout<<"You won't be eaten!\n";
        else
            cout<<"Uh oh..\n";
    }
    return 0;
}
