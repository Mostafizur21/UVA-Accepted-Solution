#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int arr[10005];
    int R,N,i,j,k,m;
    while(cin>>R>>N)
    {
        for(i=1;i<=R;i++)
            arr[i]=1;
        k=0;
        m=N;
        while(N--)
        {
            cin>>i;
            arr[i]=0;
        }
        if(m==R)
            cout<<"*";

        else
            for(j=1; j<=R; j++)
            {
                    if(arr[j]==1)
                    {
                        cout<<j<<" ";
                    }
            }
        cout<<endl;
    }
    return 0;
}
