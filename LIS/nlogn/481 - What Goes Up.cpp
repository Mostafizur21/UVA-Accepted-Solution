#include<bits/stdc++.h>

using namespace std;

#define inf (1<<29)

int n;
int Sequence[100000];
int L[100000];
int I[100000];
int LisSequence[100000];

int LisNlogK()
{
    I[0] = -inf;

    for(int i=1; i<=n; i++)
        I[i] = inf;

    int LisLength=0;

    for(int i=0; i<n; i++)
    {
        int low = 0,high = LisLength,mid;

        while(low<=high)
        {
            mid = (low+high)/2;

            if(I[mid]<Sequence[i])
                low = mid+1;
            else
                high = mid-1;
        }

        I[low] = Sequence[i];

        L[i] = low;

        if(LisLength<low)
            LisLength = low;
    }

    int top = LisLength-1;

    int temp = LisLength;

    for(int i=n-1; i>=0; i--)
    {
        if(L[i] == LisLength)
        {
            LisSequence[top] = Sequence[i];
            top--;
            LisLength--;
            break;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        if(L[i] == LisLength && LisSequence[top+1]>Sequence[i]&&LisLength>0 )
        {
            LisSequence[top] = Sequence[i];
            top--;
            LisLength--;
        }
    }

    return temp;;

}

int main()
{

    n=0;

    while(scanf("%d",&Sequence[n])!=EOF)
        n++;

    int result = LisNlogK();

    printf("%d\n-\n",result);

    for(int i=0; i<result; i++)
        printf("%d\n",LisSequence[i]);


    return 0;
}
