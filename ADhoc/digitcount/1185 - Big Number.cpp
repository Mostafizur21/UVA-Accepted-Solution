#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

long long arr[10000000+5];

int main()
{
    double result,k;

    result = 1;

    k = log(10);

    for(long j=1; j<=10000000; j++)
    {
        result+=log(j)/k;
        arr[j] = (long long)(result);
    }


    int n,m;

    cin>>n;

    while(n--)
    {
        cin>>m;
        cout<<arr[m]<<endl;
    }

    return 0;
}
