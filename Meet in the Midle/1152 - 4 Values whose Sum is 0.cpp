#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;

int ab[4001*4001],len,a[4001][4];

long long binary_sarch(int value)
{
    int low=0,high=len-1,mid;

    long long sum=0;

    while(low<high)
    {
        mid=(high+low)/2;

        if(ab[mid]<value)
            low=mid+1;

        else
            high=mid;
    }

    while(low<len&&ab[low++]==value)
        sum++;

    return sum;

}

int main()
{
    int n,t;

    scanf("%d",&t);

    while(t--)
    {

        len=0;

        long long result=0;

        scanf("%d",&n);

        for(int p=0; p<n; p++)
        {
            scanf("%d%d%d%d",&a[p][0],&a[p][1],&a[p][2],&a[p][3]);
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                ab[len++]=a[i][0]+a[j][1];
        }

        sort(ab,ab+len);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {

                result+=binary_sarch(-a[i][2]-a[j][3]);
            }
        }

        printf("%lld\n",result);

        if(t)
            printf("\n");

    }

    return 0;
}

