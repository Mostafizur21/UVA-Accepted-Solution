#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    long long int a,b,c,d,L,f,division,i,j,k,m,n;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)!=EOF)
    {
        if(a==0&&b==0&&c==0&&d==0&&L==0)
            break;
        division=0;
        for(i=0;i<=L;i++)
        {
            f=((a*pow(i,2))+(b*i)+c);
            if(f%d==0)
                division=division+1;
        }
        cout<<division<<endl;
    }
    return 0;
}
