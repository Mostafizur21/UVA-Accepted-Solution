#include <bits/stdc++.h>

using namespace std;

int position[10],n=8,solution,roww,column;

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

            if(queen==n&&position[column]==roww)
            {

                printf("%2d     ",solution++);

                for(int a=1; a<=n; a++)

                    cout<<" "<<position[a];//print the solution

                cout<<endl;

            }

            else nQueens(queen + 1);
        }
    }
}

int main()
{
    int test,check=0;

    cin>>test;

    while(test--)
    {
        solution = 1;

        if(check)
            cout<<endl;

        check = 1;

        cin>>roww>>column;

        cout<<"SOLN       COLUMN"<<endl;

        cout<<" #      1 2 3 4 5 6 7 8"<<endl<<endl;

        nQueens(1);

    }

    return 0;
}
