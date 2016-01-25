#include <bits/stdc++.h>
#define ll double

using namespace std;

struct matrix
{
    ll F[2][2];
};

ll a,b;

int n,f0,f1;

// multiplies two matrices and returns the result
matrix multiply(matrix a, matrix b)
{

    matrix r;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            ll sum = 0;

            for (int k = 0; k <2;  k++)
            {
                sum += a.F[i][k] * b.F[k][j];

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
    int tcase;

    scanf("%d",&tcase);

    for(int i=1; i<=tcase; i++)
    {
        scanf("%d %d %lf %lf %d",&f0,&f1,&a,&b,&n);

        if(n==0)
            printf("%d\n",f0);

        else if(n==1)
            printf("%d\n",f1);

        else
        {
            matrix mat;

            mat.F[0][0] = a;

            mat.F[0][1] = b;

            mat.F[1][0] = 1;

            mat.F[1][1] = 0;

            mat = power(mat,n-1);

            double ans = mat.F[0][0]*f1+mat.F[0][1]*f0;

            printf("%0.lf\n",ans);
        }

    }

    return 0;
}
