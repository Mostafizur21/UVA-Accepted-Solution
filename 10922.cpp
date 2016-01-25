#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>

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
    char input[1005];
    int i,j,k,m,n,degree,len;
    while(gets(input))
    {
        k=0;
        degree=1;
        if(!strcmp(input,"0"))
            break;
        len=strlen(input);
        i=divider(input,len,9);
        if(i!=0)
            printf("%s is not a multiple of 9.\n",input);
        else
        {
            for(j=0;input[j]!='\0';j++)
            {
                k+=input[j]-48;
            }
            while(k!=9)
            {
                degree++;
                m=k;
                n=0;
                while(m!=0)
                {
                    n+=m%10;
                    m=m/10;
                }
                if(n>8)
                    k=n;
                else
                    break;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",input,degree);
        }
    }
    return 0;
}
