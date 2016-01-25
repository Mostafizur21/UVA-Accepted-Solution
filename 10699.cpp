#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 1000000

using namespace std;

bool  prime[MAX];

int main()
{
    int i,j,k,m;
    for(int i=2;i<=MAX;i++)
        prime[i]=true;
    for(int i=4;i<=MAX;i+=2) prime[i]=false;
    for(int i=3;i<=sqrt(MAX);i+=2)
    {
        if(prime[i]==true)
        for(int j=i*i;j<MAX;j+=(2*i))
            prime[j]=false;
    }
    while(scanf("%d",&m)!=EOF)
    {
        if(m==0)
            break;
            k=0;
            if(m%2==0)
                k++;
            for(i=3;i<=m;i+=2)
            {
                if(prime[i])
                {
                    if(m%i==0)
                        k++;
                }
            }
            cout<<m<<" : "<<k<<endl;
    }
    return 0;
}
