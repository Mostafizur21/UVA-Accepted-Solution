#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#define MAX 1042

using namespace std;

bool  prime[MAX];

int main()
{
    int i,j,k,n;
    char a[22];
    for(int i=2;i<=MAX;i++)
        prime[i]=true;
    for(int i=4;i<=MAX;i+=2) prime[i]=false;
    for(int i=3;i<=sqrt(MAX);i+=2)
    {
        if(prime[i]==true)
        for(int j=i*i;j<MAX;j+=(2*i))
            prime[j]=false;
    }

    while(gets(a))
    {
        n=0;
        for(k=0;a[k]!='\0';k++)
        {
            if(a[k]>=65&&a[k]<=90)
            n=n+a[k]-38;
            else if(a[k]>=97&&a[k]<=122)
                n=n+a[k]-96;
        }
        if(prime[n])
            cout<<"It is a prime word.\n";
        else
            cout<<"It is not a prime word.\n";
    }
    return 0;
}
