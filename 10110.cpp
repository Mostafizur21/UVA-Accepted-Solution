#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    long long int input,i,j,k,m,n;
    while(scanf("%lld",&input))
    {
        if(input==0)
            break;
        m=sqrt(input);
        n=m*m;
        if(n==input)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
