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
            else if(c=='e') b[i]='q';
            else if(c=='E') b[i]='q';
            else if(c=='r') b[i]='w';
            else if(c=='R') b[i]='w';
            else if(c=='t') b[i]='e';
            else if(c=='T') b[i]='e';
            else if(c=='y') b[i]='r';
            else if(c=='Y') b[i]='r';
            else if(c=='u') b[i]='t';
            else if(c=='U') b[i]='t';
            else if(c=='i') b[i]='y';
            else if(c=='I') b[i]='y';
            else if(c=='o') b[i]='u';
            else if(c=='O') b[i]='u';
            else if(c=='p') b[i]='i';
            else if(c=='P') b[i]='i';

            else if(c=='d') b[i]='a';
            else if(c=='D') b[i]='a';
            else if(c=='f') b[i]='s';
            else if(c=='F') b[i]='s';
            else if(c=='g') b[i]='d';
            else if(c=='G') b[i]='d';
            else if(c=='h') b[i]='f';
            else if(c=='H') b[i]='f';
            else if(c=='j') b[i]='g';
            else if(c=='J') b[i]='g';
            else if(c=='k') b[i]='h';
            else if(c=='K') b[i]='h';
            else if(c=='l') b[i]='j';
            else if(c=='L') b[i]='j';

            else if(c=='c') b[i]='z';
            else if(c=='C') b[i]='z';
            else if(c=='v') b[i]='x';
            else if(c=='V') b[i]='x';
            else if(c=='b') b[i]='c';
            else if(c=='B') b[i]='c';
            else if(c=='n') b[i]='v';
            else if(c=='N') b[i]='v';
            else if(c=='m') b[i]='b';
            else if(c=='M') b[i]='b';

            else if(c==',') b[i]='n';
            else if(c=='.') b[i]='m';
            else if(c=='/') b[i]=',';

            else if(c=='[') b[i]='o';
            else if(c==']') b[i]='p';

            else if(c==';') b[i]='k';
            else if(c==39) b[i]='l';

            else if(c=='2') b[i]='`';
            else if(c=='3') b[i]='1';
            else if(c=='4') b[i]='2';
            else if(c=='5') b[i]='3';
            else if(c=='6') b[i]='4';
            else if(c=='7') b[i]='5';
            else if(c=='8') b[i]='6';
            else if(c=='9') b[i]='7';
            else if(c=='0') b[i]='8';
            else if(c=='-') b[i]='9';
            else if(c=='=') b[i]='0';
            else if(c==92) b[i]='-';
        }
        b[i]='\0';
         puts(b);
    }
}

