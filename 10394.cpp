#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 20000005
#define max 100000000

int a[max],b[max];

using namespace std;

bool  prime[MAX];

int main()
{
    long long int i,j,k=0,c,d,e,f=0,g=0,h,input,output1,output2;
    for(int i=3;i<=MAX;i+=2)
        prime[i]=true;
        prime[2]=true;
    for(int i=3;i<=sqrt(MAX);i+=2)
    {
        if(prime[i]==true)
        for(int j=i*i;j<MAX;j+=(2*i))
            prime[j]=false;
    }
    for(c=3;c<=20000005;c+=2)
    {
        if(prime[c]&&prime[c+2])
        {
            d=c;
            e=c+2;
            if(e-d==2)
            {
                  a[f++]=d;
                  b[g++]=e;
            }
        }
    }
    while(scanf("%d",&input)!=EOF)
    {
        cout<<"("<<a[input-1]<<", "<<b[input-1]<<")"<<endl;
    }
    return 0;
}
