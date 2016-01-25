#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char a[100000],b[100000];
    int i;
    while(gets(a))
    {
        for(i=0;a[i]!='\0';i++)
        {
            char c=a[i];
            if(c==' ') b[i]=c;
            else if(c=='W') b[i]='Q';
            else if(c=='E') b[i]='W';
            else if(c=='R') b[i]='E';
            else if(c=='T') b[i]='R';
            else if(c=='Y') b[i]='T';
            else if(c=='U') b[i]='Y';
            else if(c=='I') b[i]='U';
            else if(c=='O') b[i]='I';
            else if(c=='P') b[i]='O';

            else if(c=='S') b[i]='A';
            else if(c=='D') b[i]='S';
            else if(c=='F') b[i]='D';
            else if(c=='G') b[i]='F';
            else if(c=='H') b[i]='G';
            else if(c=='J') b[i]='H';
            else if(c=='K') b[i]='J';
            else if(c=='L') b[i]='K';

            else if(c=='X') b[i]='Z';
            else if(c=='C') b[i]='X';
            else if(c=='V') b[i]='C';
            else if(c=='B') b[i]='V';
            else if(c=='N') b[i]='B';
            else if(c=='M') b[i]='N';

            else if(c==',') b[i]='M';
            else if(c=='.') b[i]=',';
            else if(c=='/') b[i]='.';

            else if(c=='[') b[i]='P';
            else if(c==']') b[i]='[';
            else if(c==92) b[i]=']';

            else if(c==';') b[i]='L';
            else if(c==39) b[i]=';';

            else if(c=='1') b[i]='`';
            else if(c=='2') b[i]='1';
            else if(c=='3') b[i]='2';
            else if(c=='4') b[i]='3';
            else if(c=='5') b[i]='4';
            else if(c=='6') b[i]='5';
            else if(c=='7') b[i]='6';
            else if(c=='8') b[i]='7';
            else if(c=='9') b[i]='8';
            else if(c=='0') b[i]='9';
            else if(c=='-') b[i]='0';
            else if(c=='=') b[i]='-';
        }
        b[i]='\0';
         puts(b);
    }
}

