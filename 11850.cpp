#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int n,arr[100],i,k,m;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        k=0;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(i=0;i<n-1;i++)
        {
            m=arr[i+1]-arr[i];
            if(m>200)
            {
                k=1;
                break;
            }
        }
        m=1422-arr[n-1];
        if(m*2>200)
            k=1;
        if(k==0)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
