#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<utility>
#include<complex>
#include<stack>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<deque>
#include<list>
#include<stdexcept>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<ctime>

using namespace std;

int main()
{
    long long int test,input,arr[52],a=0,b=1,i,j;
    for(i=0;i<=51;i++)
    {
        arr[i]=a+b;
        a=b;
        b=arr[i];
    }
    scanf("%lld",&test);
    for(j=1;j<=test;j++)
    {
        scanf("%lld",&input);
        if(input==0)
            arr[input]=0;
        printf("Scenario #%lld:\n%lld\n\n",j,arr[input]);
    }
    return 0;
}
