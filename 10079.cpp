#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int i,j,k,m,n;
    while(scanf("%lld",&m)!=EOF)
    {
        if(m<0)
        break;
        n=0;
        n=((m*(m+1))/2)+1;
        cout<<n<<endl;
    }
    return 0;
}
