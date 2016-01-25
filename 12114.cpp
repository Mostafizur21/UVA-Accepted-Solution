#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<vector>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<set>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<sstream>
#include<utility>
#include<complex>
#include<cstring>

using namespace std;

int main()
{
    int B,S,i,n=1;
    double a,b;
    while(scanf("%d %d",&B,&S))
    {
        if(B==0&&S==0)
            break;
        a=(double)S/B;
        if(a>1)
            a=1;
        i=B-1;
        if(i==0)
            printf("Case %d: :-\\\n",n++);
        else
        {
            b=(double)(S-1)/i;
            if(b>1)
                b=1;
            if(a==b)
                printf("Case %d: :-|\n",n++);
            else if(a>b)
                printf("Case %d: :-(\n",n++);
            else
                printf("Case %d: :-)\n",n++);
        }
    }
    return 0;
}
