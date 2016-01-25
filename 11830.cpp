#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
    string disit,input;
    int i,j,k,m,n,len;
    char ch[100000],ch1[10000];
    while(cin>>disit)
    {
        n=0;
        m=0;
        cin>>input;
        if(input=="0"&&disit=="0")
            break;
        for(i=0;i<input.size();i++)
        {
            if(input[i]!=disit[0])
                ch[m++]=input[i];
        }
        ch[m]='\0';
        for(j=0;ch[j]!='\0';j++)
        {
            if(ch[j]!='0')
                ch1[n++]=ch[j];
        }
        ch1[n]='\0';
        len=strlen(ch1);
        if(len==0)
            printf("0\n");
        else
            puts(ch);
    }
    return 0;
}
