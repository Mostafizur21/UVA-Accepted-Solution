#include <bits/stdc++.h>
#define MAX 10005

using namespace std;

bool  prime[MAX];

void seive()
{
    for(int i=3; i<=MAX; i+=2)
        prime[i]=true;

    prime[2]=true;

    int k=sqrt(MAX);

    for(int i=3; i<=k; i+=2)
    {
        if(prime[i]==true)

            for(int j=i*i; j<=MAX; j+=(2*i))
                prime[j]=false;
    }

}

int main()
{
    seive();

    int arr[1229],result[10002],sum,total,in;

    arr[0] = 2;

    int index = 1;

    for(int i=3; i<=MAX; i+=2)
        if(prime[i])
            arr[index++] = i;

    for(int i=2; i<=10000; i++)
    {
        sum = 0;
        total = 0;
        in = 0;

        for(int j=0; j<index; j++)
        {
            if(arr[j]>i)
                break;

            if(total+arr[j]<i)
            {
                total+=arr[j];
            }

            else if(total+arr[j]>i)
            {
                total-=arr[in++];
                j--;
            }

            else if(total+arr[j]==i)
            {
                total+=arr[j];

                sum++;

                total-=arr[in++];
            }

        }

        result[i] = sum;
    }

    int input;

    while(cin>>input && input)
        cout<<result[input]<<endl;

    return 0;
}
