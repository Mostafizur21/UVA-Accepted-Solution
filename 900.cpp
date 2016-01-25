#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    long long int i,j,k,m,input;
    while(scanf("%lld",&input))
    {
        j=k=0;
        m=1;
        if(input==0)
            break;
        for(i=0;i<input;i++)
        {
            j=k+m;
            if(i==0)
                m=1;
            else
                m=k;
            k=j;
        }
        printf("%lld\n",j);
    }
    return 0;
}
