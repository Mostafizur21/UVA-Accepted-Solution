#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 1000000

using namespace std;

bool  prime[MAX];

int main()
{
    int i,j,k,m,n,input,sum,p;
    for(int i=3;i<=MAX;i+=2)
        prime[i]=true;
        prime[2]=true;
    for(int i=3;i<=sqrt(MAX);i+=2)
    {
        if(prime[i]==true)
        for(int j=i*i;j<MAX;j+=(2*i))
            prime[j]=false;
    }
      while(scanf("%d",&input))
      {
          if(input==0)
            break;
            sum=0;
            n=input;
            p=0;
            if(input%2==0)
                input--;
            m=2;
          while(m<=input)
          {
              if(prime[input]);

              else
              while(!prime[input])
              {
                  input-=2;
              }
              if(prime[m])
             {
                sum=m+input;
             }
             if(sum==n)
             {
                 p=1;
                  break;
             }

             else if(sum<n)
             {
                 if(m==2)
                    m++;
                 else
                    m+=2;
             }

             else
             {
                 if(input==3)
                    input--;
                 else
                    input-=2;
             }
          }
          if(p==1)
            printf("%d:\n%d+%d\n",n,m,input);
          else
            printf("%d:\nNO WAY!\n",n);
      }
    return 0;
}
