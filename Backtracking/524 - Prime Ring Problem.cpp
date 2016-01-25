#include <bits/stdc++.h>
#define MAX 35

using namespace std;

bool  prime[MAX];

int position[20],n,check;

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

void nQueens(int queen)
{

    for(int i=2; i<=n; i++)
    {
        check = 0;

        for(int j=1; j<queen; j++)
        {
            if(position[j]==i)
            {
                check = 1;
                continue;

            }
        }

        if(!check)
        {
            if(queen==n)
            {
                if(( prime[position[queen-1]+i] )&&( prime[position[1]+i]))
                {
                    position[queen] = i;

                    for(int a=1; a<n; a++)

                        cout<<position[a]<<" ";//print the solution

                    cout<<position[n]<<endl;
                }
            }

            else
            {
                if( prime[position[queen-1]+i] )
                {

                    position[queen] = i;

                    nQueens(queen + 1);
                }
            }
        }
    }
}

int main()
{
    int test=1;

    seive();

    while(cin>>n)
    {
        if(test>1)
            cout<<endl;

        position[1] = 1;

        if(n==1)
        {
            cout<<"Case "<<test++<<":"<<endl;
            cout<<"1"<<endl;
        }

        else if(n%2!=0)
        {
            cout<<"Case "<<test++<<":"<<endl;
        }

        else
        {
            cout<<"Case "<<test++<<":"<<endl;

            nQueens(2);

        }

    }

    return 0;
}
