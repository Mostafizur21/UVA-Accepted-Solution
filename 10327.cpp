/************Accepted******************/
#include<iostream>
#include<cstdio>
#define MAX 100000000

int a[MAX];

using namespace std;

int main()
{
    long long int i,j,k,m,n,p,b;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
        cin>>a[i];
        m=0;
        for(j=0;j<n;j++)
        {
            for(p=0;p<n;p++)
            {
                if(a[p]>a[p+1])
                {
                    b=p+1;
                    if(b==n)
                    break;
                    m++;
                    k=a[b];
                    a[b]=a[p];
                    a[p]=k;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<m<<endl;
    }
    return 0;
}
