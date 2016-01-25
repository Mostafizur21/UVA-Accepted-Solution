#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1002];

    memset(arr,-1,sizeof(arr));

    for(int i=1;i<=999;i++)
    {
        int j = i;

        int div = 0;

        for(int k=1;k*k<=j;k++)
        {
            if(j%k==0)
            {
                if(k*k==j)

                  div+=k;

                else
                {
                    div+=k;

                    div+=j/k;
                }
            }
        }

        if(div>1000)
            continue;

        else
            arr[div] = i;
    }

    int input,test=1;

    while(cin>>input &&input)
    {
        cout<<"Case "<<test++<<": "<<arr[input]<<endl;
    }

    return 0;
}
