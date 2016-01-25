#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>

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
    int test,S,arr[15],i,j,k,m,n,len;
    char ch[100000];
    scanf("%d",&test);

    for(i=1;i<=test;i++)
    {
        scanf("%s",&ch);
        scanf("%d",&S);
        for(j=0;j<S;j++)
            scanf("%d",&arr[j]);
        len=strlen(ch);
        for(k=0;k<S;k++)
        {
            m=divider(ch,len,arr[k]);
            if(m!=0)
                break;
        }
        if(m!=0)
            printf("%s - Simple.\n",ch);
        else
            printf("%s - Wonderful.\n",ch);
    }
    return 0;
}
