#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int i,j,k,m,n,sum,total,p;
    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
        sum=0;
        p=n;
        while(n>=k)
        {
            sum=sum+(n/k);
            n=(n%k)+(n/k);
        }
        cout<<sum+p<<endl;
    }
    return 0;
}
