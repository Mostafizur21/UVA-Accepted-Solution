#include<bits/stdc++.h>

using namespace std;

bool cmp(const int a, const int b)
{
    return a>b;
}

int main()
{
    int i,j,k,m,n,arr[1005];

    while(scanf("%d",&n)!=EOF)
    {
        m=0;

        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);

        for(int i=0; i<n; i++)
        {

            sort(arr+i,arr+n,cmp);

            k=arr[i];

            if(k+i>=n)
            {
                m=1;
                break;
            }

            for(j=i+1; j<=k+i; j++)
            {
                arr[j]--;

                if(arr[j]<0)
                {
                    m=1;
                    break;

                }

            }

            if(m==1)
                break;

        }

        if(m==1)
            printf("0\n");

        else
            printf("1\n");

    }

    return 0;
}
