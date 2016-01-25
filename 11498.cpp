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
    int test,N,M,X,Y,i;
    while(scanf("%d",&test))
    {
        if(test==0)
            break;
        scanf("%d %d",&N,&M);
        for(i=1;i<=test;i++)
        {
            scanf("%d %d",&X,&Y);
            if(N==X||M==Y)
                printf("divisa\n");
            else if(N<X&&M<Y)
                printf("NE\n");
            else if(Y>M&&X<N)
                printf("NO\n");
            else if(Y<M&&X>N)
                printf("SE\n");
            else
                printf("SO\n");
        }
    }
    return 0;
}
