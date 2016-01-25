#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int i=0,m,n,q,arr[10000];
    while(scanf("%d",&arr[i++])!=EOF)
    {
        sort(arr,arr+i);
        if(i%2!=0)
        {
              m=i/2;
              printf("%d\n",arr[m]);
        }
        else
        {
            n=i/2;
            printf("%d\n",(arr[n]+arr[n-1])/2);
        }
    }
    return 0;
}
