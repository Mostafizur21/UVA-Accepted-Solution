#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1000000009;

/*
 * function to multiply two matrices
 */
void multiply(ll F[3][3], ll M[3][3])
{

    ll N[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            ll sum=0;

            for(int k=0; k<3; k++)
            {
                sum+=F[i][k]*M[k][j];

                sum%=mod;
            }

            N[i][j] = sum;
        }
    }


    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            F[i][j] = N[i][j];
        }
    }

}

/*
 * function to calculate power of a matrix
 */
void power(ll F[3][3], ll n)
{
    if (n == 0||n==1)//as pow(a,0)==0 and pow(a,1)==a
        return;

    ll M[3][3] = {{1,1,1},{1,0,0},{0,1,0}};

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
    ll F[3][3] = {{1,1,1},{1,0,0},{0,1,0}};

    power(F,n-1);

    return (F[1][0]+F[2][0])%mod;//we also can return F[0][1]


}

int main()
{
    ll n;

    while (cin>>n)
    {
        if(n==0)
            break;

        else if(n==1)
            cout<<n-1<<endl;

        else

            cout<<fibo_matrix(n)<<endl;
    }

    return 0;
}
