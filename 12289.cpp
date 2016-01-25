#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int test,i,len,cunt;
    char ch[11];
    while(scanf("%d",&test)!=EOF)
    {
        getchar();
        for(i=1;i<=test;i++)
        {
            cunt=0;
            scanf("%s",&ch);
            len=strlen(ch);
            if(len==5)
                printf("3\n");
            else
            {
                if(ch[0]=='o') cunt++;
                if(ch[1]=='n') cunt++;
                if(ch[2]=='e') cunt++;
                if(cunt>=2)
                     printf("1\n");
                else
                     printf("2\n");
            }
        }
    }
    return 0;
}
