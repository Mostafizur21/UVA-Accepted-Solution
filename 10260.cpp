#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int i,j,k,m,n,p,q;
    char word[20];
    while(scanf("%s",word)==1)
    {
        j=k=m=n=p=q=0;
        for(i=0;word[i]!='\0';i++)
        {
               if((word[i]=='B'||word[i]=='F'||word[i]=='P'||word[i]=='V')&&j==0)
               {
                   printf("1");
                   j=1;
                   k=m=n=p=q=0;
               }
                else if((word[i]=='C'||word[i]=='G'||word[i]=='J'||word[i]=='K'||word[i]=='Q'||word[i]=='S'||word[i]=='X'||word[i]=='Z')&&k==0)
                {
                   printf("2");
                   k=1;
                   j=m=n=p=q=0;
                }
                else if((word[i]=='D'||word[i]=='T')&&m==0)
                 {
                     printf("3");
                     m=1;
                     j=k=n=p=q=0;
                 }
                else if((word[i]=='L')&&n==0)
                {
                  printf("4");
                  n=1;
                  j=k=m=p=q=0;
                }
                else if((word[i]=='M'||word[i]=='N')&&p==0)
                {
                    printf("5");
                    p=1;
                    j=k=m=n=q=0;
                }
                else if((word[i]=='R')&&q==0)
                {
                    printf("6");
                    q=1;
                    j=k=m=n=p=0;
                }
                else if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'||word[i]=='H'||word[i]=='W'||word[i]=='Y')
                        j=k=m=n=p=q=0;
        }
        printf("\n");
    }
    return 0;
}
