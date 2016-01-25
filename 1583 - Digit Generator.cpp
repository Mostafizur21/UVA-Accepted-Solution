#include<bits/stdc++.h>
using namespace std;

int arr[100001];

int main()
{
    int test,N,i,j,k,m,n,a;

    for(i=1; i<10; i++)
    {
        m = i;
        a=0;
        for(j=1; j<i; j++)
        {
            n=j;
            k=0;
            while(n>0)
            {
                k+=n%10;
                n/=10;
            }
            if(j+k==i)
            {
                arr[i] = j;
                a=1;
                break;
            }
        }
        if(a==0)
            arr[i] = 0;
    }

    for(i=10; i<19; i++)
    {
        m = i-9;
        a=0;
        for(j=m; j<i; j++)
        {
            n=j;
            k=0;
            while(n>0)
            {
                k+=n%10;
                n/=10;
            }
            if(j+k==i)
            {
                arr[i] = j;
                a=1;
                break;
            }
        }
        if(a==0)
            arr[i] = 0;
    }


    for(i=19; i<100; i++)
    {
        m = i-18;
        a=0;
        for(j=m; j<i; j++)
        {
            n=j;
            k=0;
            while(n>0)
            {
                k+=n%10;
                n/=10;
            }
            if(j+k==i)
            {
                arr[i] = j;
                a=1;
                break;
            }
        }
        if(a==0)
            arr[i] = 0;
    }

    for(i=100; i<1000; i++)
    {
        m = i-27;
        a=0;
        for(j=m; j<i; j++)
        {
            n=j;
            k=0;
            while(n>0)
            {
                k+=n%10;
                n/=10;
            }
            if(j+k==i)
            {
                arr[i] = j;
                a=1;
                break;
            }
        }
        if(a==0)
            arr[i] = 0;
    }

    for(i=1000; i<10000; i++)
    {
        m = i-36;
        a=0;
        for(j=m; j<i; j++)
        {
            n=j;
            k=0;
            while(n>0)
            {
                k+=n%10;
                n/=10;
            }
            if(j+k==i)
            {
                arr[i] = j;
                a=1;
                break;
            }
        }
        if(a==0)
            arr[i] = 0;
    }

    for(i=10000; i<100000; i++)
    {
        m = i-45;
        a=0;
        for(j=m; j<i; j++)
        {
            n=j;
            k=0;
            while(n>0)
            {
                k+=n%10;
                n/=10;
            }
            if(j+k==i)
            {
                arr[i] = j;
                a=1;
                break;
            }
        }
        if(a==0)
            arr[i] = 0;
    }

    for(i=100000; i<=100000; i++)
    {
        m = i-54;
        a=0;
        for(j=m; j<i; j++)
        {
            n=j;
            k=0;
            while(n>0)
            {
                k+=n%10;
                n/=10;
            }
            if(j+k==i)
            {
                arr[i] = j;
                a=1;
                break;
            }
        }
        if(a==0)
            arr[i] = 0;
    }

    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&N);
        printf("%d\n",arr[N]);
    }
    return 0;
}
