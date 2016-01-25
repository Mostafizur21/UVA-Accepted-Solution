#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int n,arr[51],i,j,k,m,test=1,sum,p;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        sum=m=0;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(p=0;p<n;p++)
            sum=sum+arr[p];
        j=sum/n;
        for(k=0;k<n;k++)
        {
            m+=abs(arr[k]-j);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",test++,m/2);
    }
    return 0;
}
