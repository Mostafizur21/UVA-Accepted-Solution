#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    char input[20],ch1[]="HELLO",ch2[]="HOLA",ch3[]="HALLO",ch4[]="BONJOUR",ch5[]="CIAO",ch6[]="ZDRAVSTVUJTE",ch7[]="#";
    int i,j,k,m,n,p,q,a=1;
    while(gets(input))
    {
        i=strcmp(input,ch7);
        if(i==0)
            break;
        j=strcmp(input,ch1);
        k=strcmp(input,ch2);
        m=strcmp(input,ch3);
        n=strcmp(input,ch4);
        p=strcmp(input,ch5);
        q=strcmp(input,ch6);
        if(j==0)
            cout<<"Case "<<a++<<": "<<"ENGLISH\n";
        else if(k==0)
            cout<<"Case "<<a++<<": "<<"SPANISH\n";
        else if(m==0)
            cout<<"Case "<<a++<<": "<<"GERMAN\n";
        else if(n==0)
            cout<<"Case "<<a++<<": "<<"FRENCH\n";
        else if(p==0)
             cout<<"Case "<<a++<<": "<<"ITALIAN\n";
        else if(q==0)
             cout<<"Case "<<a++<<": "<<"RUSSIAN\n";
        else
            cout<<"Case "<<a++<<": "<<"UNKNOWN\n";
    }
    return 0;
}
