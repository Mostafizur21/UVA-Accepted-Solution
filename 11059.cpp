#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    long long int N,S[19],i,k=1,result,m,multiplication,n;
    while(scanf("%lld",&N)!=EOF)
    {
        result=0;
        multiplication=1;
        for(i=0;i<N;i++)

            cin>>S[i];
        for(m=0;m<N;m++)
        {
           for(n=m;n<N;n++)
           {
                multiplication=multiplication*S[n];
                if(multiplication>result)
                {
                    result=multiplication;
                }
           }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n",k++,result);
    }
    return 0;
}
