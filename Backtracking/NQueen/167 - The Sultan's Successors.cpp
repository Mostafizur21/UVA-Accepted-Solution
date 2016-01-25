#include <bits/stdc++.h>

using namespace std;

int position[10],n=8,number[10][10],sum,maximum;

bool place(int queen, int row)
{
    for(int i=1; i<queen; i++)
    {
        if(position[i]==row || (abs(position[i]-row) == abs(i-queen)))
            return false;
    }
    return true;
}

void nQueens(int queen)
{
    for(int i=1; i<=n; i++)
    {
        if( place(queen,i) )
        {
            position[queen] = i;

            if(queen==n)
            {
                for(int a=1; a<=n; a++)
                {
                    sum+=number[a][position[a]];
//                    cout<<position[a]<<" ";//print the solution
//                cout<<endl;
                }

                if(sum>maximum)
                    maximum = sum;

                sum=0;
            }

            else nQueens(queen + 1);
        }
    }
}

int main()
{
    int test;

    cin>>test;

    while(test--)
    {
        sum=maximum=0;

        for(int i=1; i<=8; i++)
            for(int j=1; j<=8; j++)
                cin>>number[i][j];

        nQueens(1);

        printf("%5d\n",maximum);

    }

    return 0;
}
