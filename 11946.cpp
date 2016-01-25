#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int test,i,j,len;
    char c[100];
    scanf("%d",&test);
    {
        getchar();
        for(i=1;i<=test;i++)
        {
            while(gets(c)!='\0')
            {
                len=strlen(c);
                if(len==0)
                    break;
            for(j=0;j<len;j++)
            {
                if(c[j]=='0')
                    printf("O");

                else if(c[j]=='1')
                    printf("I");

                else if(c[j]=='2')
                    printf("Z");

                else if(c[j]=='3')
                    printf("E");

                else if(c[j]=='4')
                    printf("A");

                else if(c[j]=='5')
                    printf("S");

                else if(c[j]=='6')
                    printf("G");

                else if(c[j]=='7')
                    printf("T");

                else if(c[j]=='8')
                    printf("B");

                else if(c[j]=='9')
                    printf("P");

                 else
                    printf("%c",c[j]);

            }
            printf("\n");
            }
            if(i!=test)
                printf("\n");
        }
    }
    return 0;
}
