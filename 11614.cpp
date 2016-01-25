//******Accepted**********//
#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    long long int test,input,result,i,j,k;
    while(scanf("%lld",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            cin>>input;
            k=1+(8*input);
            int m=sqrt(k);
            result=(m-1)/2;
            cout<<result<<endl;
        }
    }
    return 0;
}

