#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct matrix
{
    ll F[20][20];

    int row, col;
};

ll d,n,mod,arr_a[20],arr_f[20];

// multiplies two matrices and returns the result
matrix multiply(matrix a, matrix b)
{

    matrix r;

    r.row = a.row;

    r.col = b.col;

    for (int i = 0; i < r.row; i++)
    {
        for (int j = 0; j < r.col; j++)
        {
            ll sum = 0;

            for (int k = 0; k < a.col;  k++)
            {
                sum += a.F[i][k] * b.F[k][j];

                sum %= mod;
            }

            r.F[i][j] = sum;
        }
    }

    return r;
}

// returns mat^p
matrix power(matrix mat, int p)
{

    if (p == 1)
        return mat;

    if (p % 2 == 1)

        return multiply(mat, power(mat, p - 1));

    matrix ret = power(mat, p / 2);

    ret = multiply(ret, ret);

    return ret;
}

int main()
{

    while(cin>>d>>n>>mod)
    {
        if(d==0&&n==0&&mod==0)
            break;

        for(int i=0; i<d; i++)
        {
            cin>>arr_a[i];
            arr_a[i] %=mod;
        }

        for(int i=0; i<d; i++)
        {
            cin>>arr_f[i];
            arr_f[i] %=mod;
        }


        matrix mat;

        mat.row = d;
        mat.col = d;

        for(int i=0; i<d; i++)
            mat.F[0][i] = arr_a[i];

        for(int i=1; i<d; i++)
        {
            for(int j=0; j<d; j++)
            {
                if(i==j+1)
                    mat.F[i][j] = 1;

                else
                    mat.F[i][j] = 0;
            }
        }

        if(n<=d)
            cout<<arr_f[n-1]<<endl;

        else
        {

            mat = power(mat,n-d);

            ll result = 0;

            for(int i=0; i<d; i++)
                result=(result+(mat.F[0][i]*arr_f[d-i-1])%mod)%mod;

            cout<<result<<endl;

        }


    }

    return 0;
}
