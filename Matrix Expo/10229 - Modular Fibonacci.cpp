#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod;

/*
 * function to multiply two matrices
 */
void multiply(ll F[2][2], ll M[2][2])
{
    cout<<"YES"<<endl;

    ll N[2][2];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            ll sum=0;

            for(int k=0;k<2;k++)
            {
                sum+=F[i][k]*M[k][j];

                sum%=mod;
            }

            N[i][j] = sum;
        }
    }

    F[0][0] = N[0][0];

    F[0][1] = N[0][1];

    F[1][0] = N[1][0];

    F[1][1] = N[1][1];
}

/*
 * function to calculate power of a matrix
 */
void power(ll F[2][2], int n)
{
    if (n == 0 || n == 1)
        return;

    ll M[2][2] = {{1,1},{1,0}};

    power(F, n / 2);

    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}

/*
 * function that returns nth Fibonacci number
 */
ll fibo_matrix(ll n)
{
    ll F[2][2] = {{1,1},{1,0}};

    if (n == 0)
        return 0;

    power(F, n - 1);

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cout<<F[i][j]<<" ";
        cout<<endl;
    }

    return F[0][0];
}

int main()
{
    int n,m;

    while (cin>>n>>m)
    {
        mod = pow(2,m);

        cout<<fibo_matrix(n)<<endl;
    }

    return 0;
}
