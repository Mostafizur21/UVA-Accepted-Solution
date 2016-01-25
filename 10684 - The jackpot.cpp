#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define siz 10005

int a[siz];

int main()
{
    int n,x;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        int mx=0;

        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            if(i==0)
            {
                if(x>0)
                    a[i]=x;
                else
                    a[i]=0;
            }
            else
            {
                if(a[i-1]+x>0)
                    a[i]=a[i-1]+x;
                else
                    a[i]=0;
            }

            mx=max(mx,a[i]);
        }
        if(mx==0)
            printf("Losing streak.\n");
        else
            printf("The maximum winning streak is %d.\n",mx);
    }
    return 0;
}
