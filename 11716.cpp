#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    char input[10005],output[10005];
    int test,len,i,j,k,m,n,a,b;
    while(scanf("%d",&test)!=EOF)
    {
        getchar();
        for(i=1;i<=test;i++)
        {
            n=0;
            m=0;
            a=0;
            gets(input);
            len=strlen(input);
            j=sqrt(len);
            if(j*j!=len)
                cout<<"INVALID\n";
            else
            {
                for(k=1;k<=j;k++)
                {
                    b=a;
                    for(int p=1;p<=j;p++)
                    {
                        output[n++]=input[b];
                        b=b+j;
                    }
                     a++;
                }
                output[n]='\0';
                puts(output);
            }
        }
    }
    return 0;
}
