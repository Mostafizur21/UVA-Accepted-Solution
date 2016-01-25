#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    char input[100],ch[]="*",ch1[]="Hajj",ch2[]="Umrah";
    int m,n,i=1;
    while(gets(input))
    {
        int p=strcmp(input,ch);
        if(p==0)
            break;
        m=strcmp(input,ch1);
        n=strcmp(input,ch2);
        if(m==0)
            cout<<"Case "<<i++<<": Hajj-e-Akbar\n";
        if(n==0)
            cout<<"Case "<<i++<<": Hajj-e-Asghar\n";
    }
    return 0;
}
