#include <bits/stdc++.h>

using namespace std;

#define M 2000000

int phi[M];

int precalculate[2000000+1];

int sum[2000000+1];

void calculatePhi()
{
    for (int i = 1; i <= M; i++)
    {
        phi[i] = i;
    }

    for (int p = 2; p <=M; p++)
    {
        if (phi[p] == p)   // p is a prime
        {
            for (int k = p; k <=M; k += p)
            {
                phi[k] -= phi[k] / p;
            }
        }
    }
}




int main()
{
    calculatePhi();

    precalculate[2] = phi[2];

    sum[1] = 0;

    sum[2] = phi[2];

    for(int i=3; i<=2000000; i++)
    {
        precalculate[i] =   1+precalculate[phi[i]];

        sum[i]+=sum[i-1]+precalculate[i];
    }

    int test,m,n;

    cin>>test;

    while(test--)
    {
        cin>>m>>n;

        cout<<sum[n]-sum[m-1]<<endl;
    }

    return 0;
}
