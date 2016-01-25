#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    char input[32],phone_number[32];
    int i,j,k;
    while(gets(input))
    {
        j=0;
        for(i=0;input[i]!='\0';i++)
        {
            if(input[i]>=65&&input[i]<=67)
            phone_number[j++]='2';

            else if(input[i]>=68&&input[i]<=70)
            phone_number[j++]='3';

            else if(input[i]>=71&&input[i]<=73)
            phone_number[j++]='4';

            else if(input[i]>=74&&input[i]<=76)
            phone_number[j++]='5';

            else if(input[i]>=77&&input[i]<=79)
            phone_number[j++]='6';

            else if(input[i]>=80&&input[i]<=83)
            phone_number[j++]='7';

            else if(input[i]>=84&&input[i]<=86)
            phone_number[j++]='8';

            else if(input[i]>=87&&input[i]<=90)
            phone_number[j++]='9';

            else
            phone_number[j++]=input[i];
        }
        phone_number[j]='\0';
        puts(phone_number);
    }
    return 0;
}
