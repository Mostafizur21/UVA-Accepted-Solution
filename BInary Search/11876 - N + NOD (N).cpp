#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,A,B,left,right,mid,arr[64728],div,i;

    arr[0] = 1;

    for(i=1; i<=64725; i++)
    {
        int temp  = arr[i-1];

        div = 0;

        for(int j=1; j*j<=temp; j++)
        {
            if(temp%j==0)
            {
                if(j*j==temp)
                    div++;
                else
                    div+=2;
            }
        }

        arr[i] = arr[i-1]+div;
    }

    scanf("%d",&test);

    for(i=1; i<=test; i++)
    {
        scanf("%d%d",&A,&B);

        left = 0;

        right = 64725;

        while(left<right)
        {
            mid = left+(right-left)/2;

            if(arr[mid]<A)
                left = mid+1;
            else
                right = mid;
        }

        while(arr[left]<A)
            left++;

        int temp = left;

        left = 0;

        right = 64725;

        while(left<right)
        {
            mid = left+(right-left)/2;

            if(arr[mid]<B)
                left = mid+1;
            else
                right = mid;
        }

        while(arr[left]>B)
            left--;

        printf("Case %d: %d\n",i,left-temp+1);
    }


    return 0;
}
