#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int a,b,i,k,m,result=0;
    char c[1000],sine;
    while(scanf("%d %c %d = %s",&a,&sine,&b,c)!=EOF)
    {
        if(sine=='+')
        {
            m=atoi(c);
            if(a+b==m)
                result++;
        }
        if(sine=='-')
        {
            if(a-b==atoi(c))
                result++;
        }
    }
    cout<<result<<endl;;
    return 0;
}
