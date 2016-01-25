#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>

using namespace std;

int divider(char y[],int a,int b)
{
    int c=0,i;
    for(i=0;i<a;i++)
    {
        c=((y[i]-'0')+c*10)%b;
    }
    if(c==0)
        return 0;
    else
        return 1;
}


int main()
{
    char a[100000];
    long long int i,j,k,m,n,len;
    while(gets(a))
    {
        len=strlen(a);
        if(len==1)
        {
              {
                   if(a[0]=='0')
                    break;
              }
        }
        i=divider(a,len,17);
        if(i==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}

