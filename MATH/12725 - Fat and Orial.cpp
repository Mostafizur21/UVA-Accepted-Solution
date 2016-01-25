#include <bits/stdc++.h>

using namespace std;

int main()
{
    double N,M,x,y,result;

    int a,b,test,i;

    cin>>test;

    for(i=1;i<=test;i++)
    {

        cin>>N>>M>>a>>b;

        x = (double)(a+b)*M;

        y = x-(double)(a*N);

        result = y/(double)b;

        if(result>10.0||result<0.0)
            printf("Case #%d: Impossible\n",i);

        else
            printf("Case #%d: %.2f\n",i,result);

    }

    return 0;
}
