#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
   long long int input,result,i,j,n;
   while(scanf("%lld",&input)!=EOF)
   {
       n=input+1;
       i=n*(n+1)/2-(n/2)*(n/2+1);
       j=i*2;
       result=j*3-9;
       printf("%lld\n",result);
   }
   return 0;
}
