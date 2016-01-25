#include <bits/stdc++.h>
using namespace std;

long int number_N,query,arr_number[50000+5],arr_query[25000+5],low,high,mid;

long int Binary_search(long int value)
{
    low = 0;

    high = number_N-1;

    while(low<high)
    {
        mid = low+(high-low)/2;

        if(arr_number[mid]<value)

            low = mid+1;

        else
            high = mid;
    }

}

int main()
{
    long int lower,upper;

    scanf("%ld",&number_N);

    for(int i=0; i<number_N; i++)

        scanf("%ld",&arr_number[i]);

    scanf("%ld",&query);

    for(int i=0; i<query; i++)

        scanf("%ld",&arr_query[i]);

    for(int i=0; i<query; i++)
    {
        long int ith_query = arr_query[i];

        Binary_search(ith_query);

        if(arr_number[low]==ith_query)
        {
            int p;

            for(p=low+1; p<number_N; p++)
            {
                if(arr_number[p]>ith_query)
                {
                    upper = arr_number[p];
                    break;
                }
            }

            if(p==number_N)
                upper = 0;

            int q;

            for(q=low-1; q>=0; q--)
            {
                if(arr_number[q]<ith_query)
                {
                    lower = arr_number[q];
                    break;
                }
            }

            if(q<0)
                lower = 0;

            if(lower>0&&upper>0)

                printf("%ld %ld\n",lower,upper);

            else if(lower>0&&upper==0)

                printf("%ld X\n",lower);

            else if(lower==0&&upper>0)

                printf("X %ld\n",upper);

            else

                printf("X X\n");
        }

        else if(arr_number[low]>ith_query)
        {
            int q;

            for(q=low-1; q>=0; q--)
            {
                if(arr_number[q]<ith_query)
                {
                    lower = arr_number[q];
                    break;
                }
            }

            if(q<0)
                lower = 0;

            if(lower>0)

                printf("%ld %ld\n",lower,arr_number[low]);

            else

                printf("X %ld\n",arr_number[low]);

        }

        else if(arr_number[low]<ith_query)
        {
            int p;

            for(p=low+1; p<number_N; p++)
            {
                if(arr_number[p]>ith_query)
                {
                    upper = arr_number[p];
                    break;
                }
            }

            if(p==number_N)
                upper = 0;

            if(upper>0)

                printf("%ld %ld\n",arr_number[low],upper);

            else

                printf("%ld X\n",arr_number[low]);

        }

    }

    return 0;

}
