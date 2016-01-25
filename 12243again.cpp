#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
    char input[2000],a;
    int i,j,k;
    while(gets(input))
    {
        j=0;
        if(!strcmp(input,"*"))
            break;
        for(i=0;input[i]!='\0';i++)
        {
            if(input[i]>='a'&&input[i]<='z')
               input[i]=input[i]-32;
        }
        a=input[0];
        for(k=0;input[k]!='\0';k++)
        {
            if(input[k]==' ')
            {
                if(a==input[k+1])
                    continue;
                else
                {
                    j=1;
                    break;
                }
            }
        }
        if(j==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}




