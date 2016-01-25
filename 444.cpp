#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
    char ch[81],a[241];
    int len,i,j,k,m,n,b,c,d,e;
    while(gets(a))
    {
        i=k=d=e=0;
        len=strlen(a);
        if((a[0]>=65&&a[0]<=90)||(a[0]>=97&&a[0]<=122)||a[0]==32||a[0]==33||a[0]==44||a[0]==46||a[0]==58||a[0]==59||a[0]==63)
        {
            for(m=len-1;m>=0;m--)
          {
              d=0;
                   n=a[m];
                   if(n==70)
                    printf("07");
                   else if(n==80)
                    printf("08");
                   else if(n==90)
                    printf("09");
                   else if(n==100)
                    printf("001");
                   else if(n==110)
                    printf("011");
                   else if(n==120)
                    printf("021");
                   else
                   {
                        while(n>=1)
                       {
                           d=(d*10)+(n%10);
                           n=n/10;
                       }
                       printf("%d",d);
                   }
          }
        }
        else
        {
            for(j=len-1;j>=0;j--)
            {
                if(a[j]=='1'&&(a[j-1]>='0'&&a[j-1]<='2'&&(a[j-2]>='0'&&a[j]<='9')))
                   {
                       i=i+a[j]-48;
                       i=(10*i)+a[j-1]-48;
                       i=(10*i)+a[j-2]-48;
                       ch[k++]=i;
                       i=0;
                       j-=2;
                   }
                   else
                   {
                        i=i+a[j]-48;
                        i=(10*i)+a[j-1]-48;
                        ch[k++]=i;
                        i=0;
                        j--;
                   }
            }
            ch[k]='\0';
            printf("%s",ch);
        }
        printf("\n");
    }
    return 0;
}
