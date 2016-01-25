/************Accepted**************/
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
    char input[202],scan,output[202],char_to_int[202];
    int i,k,m,n,int_number,cash_number;
    while(scanf("%d",&cash_number)!=EOF)
    {
        n=1;
        for(int b=1;b<=cash_number;b++)
        {
            k=0;
            m=0;
            cin>>input;
            for(i=0;input[i]!='\0';i++)
            {
                if(input[i]>=65&&input[i]<=90)
                {
                    scan=input[i];
                }
                else
                {
                     char_to_int[m++]=input[i];
                     if((input[i+1]>=65&&input[i+1]<=90)||(input[i+1]=='\0'))
                     {
                          char_to_int[m]='\0';
                          int_number=atoi(char_to_int);
                         for(int a=1;a<=int_number;a++)
                          {
                                output[k++]=scan;
                          }
                         m=0;
                    }
                }
            }
            output[k]='\0';
            cout<<"Case "<<n++<<": ";
            puts(output);
        }
    }
    return 0;
}
