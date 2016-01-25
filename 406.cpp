#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 1000

using namespace std;

bool  prime[MAX];

int main()
{
    int i,j,N,C,a[170],m,n,p,q,r,s,a1,b,c,d;
    for(int i=3;i<=MAX;i+=2)
        prime[i]=true;
        prime[2]=true;
    for(int i=3;i<=sqrt(MAX);i+=2)
    {
        if(prime[i]==true)
        for(int j=i*i;j<MAX;j+=(2*i))
            prime[j]=false;
    }
    while(scanf("%d %d",&N,&C)!=EOF)
    {
        m=0;
        if(N>=1)
        a[m++]=1;
        if(N>=2)
        a[m++]=2;
        for(n=3;n<=N;n+=2)
        {
            if(prime[n])
                a[m++]=n;
        }
        if(m%2!=0)
        {
            printf("%d %d:",N,C);
            q=m/2;
            p=((2*C)-1)/2;
            if(p<m&&q>p)
            for(r=q-p;r<=q+p;r++)
                 printf(" %d",a[r]);
            else
                for(s=0;s<m;s++)
                printf(" %d",a[s]);
                printf("\n");
        }

       if(m%2==0)
        {
            printf("%d %d:",N,C);
            a1=m/2;
            b=(2*C)/2;
            if(b<m&&a1>b)
            for(c=a1-b;c<=a1+b-1;c++)
                 printf(" %d",a[c]);
            else
                for(d=0;d<m;d++)
                printf(" %d",a[d]);
                printf("\n");
        }
         printf("\n");
    }
    return 0;
}
