/*******Accepted*********/
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
       long int n,num,a,i,p,b[99999];
      for(p=1;;p++)
      {
          scanf("%ld",&num);
          if(num<0)
          break;
          else
          {
               n=0;
               for(;;)
              {
                 a=num%3;
                 num=num/3;
                 b[n++]=a;
                 if(num==0)
                 break;
              }
              for(i=n-1;i>=0;i--)
              printf("%ld",b[i]);
              printf("\n");
          }
      }
      return 0;
}
