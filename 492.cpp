#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctype.h>

using namespace std;

int main()
{
    char input,output;
    while(input=getchar())
    {
        if(input==EOF)
        return 0;
        if(isalpha(input))
         {
            if((input=='a'||input=='A'||input=='e'||input=='E'||input=='i'||input=='I'||input=='o'||input=='O'||input=='u'||input=='U'))
            {
                    while(isalpha(input))
                   {
                         printf("%c",input);
                         input=getchar();
                   }
            printf("ay");
            }
            else
            {
                output=input;
                input=getchar();
                while(isalpha(input))
                {
                    printf("%c",input);
                    input=getchar();
                }
                printf("%cay",output);
            }
         }
            printf("%c",input);
    }
    return 0;
}
