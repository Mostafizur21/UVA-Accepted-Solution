#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    char input[1000000],output[1000000];
    while(gets(input))
    {
        int n=0;
        for(int i=0;input[i]!='\0';i++)
        {
            output[n++]=input[i]-7;
        }
        output[n]='\0';
        puts(output);
    }
    return 0;
}
