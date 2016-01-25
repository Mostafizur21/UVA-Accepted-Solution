#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
long long int arr[101][101];
int main()
{
    int test,i,j,k,m,n,N,a,b;
    char ch1,ch2;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        m=0;
        cin>>ch1>>ch2>>N;
        for(j=0;j<N;j++)
        {
            for(k=0;k<N;k++)
            {
                cin>>arr[k][j];
                if(arr[k][j]<0)
                    m=1;
            }
        }
        if(m==1)
            cout<<"Test #"<<i<<": Non-symmetric.\n";
        else
        {
            n=N/2;
            a=N-1;
            for(j=0;j<n;j++)
            {
                b=N-1;
                for(k=0;k<N;k++)
                {
                    if(arr[k][j]==arr[b--][a])
                        continue;
                    //cout<<arr[k][j]<<" "<<arr[b+1][a]<<endl;
                    else
                    {
                        m=1;
                        break;
                    }
                }
                a--;
            }
            if(N%2!=0)
            {
                for(j=n;j<=n;j++)
                {
                    b=N-1;
                    for(k=0;k<N/2;k++)
                    {
                        if(arr[k][j]==arr[b--][n])
                            continue;
                        //cout<<arr[k][j]<<" "<<arr[b+1][n]<<endl;
                        else
                        {
                            m=1;
                            break;
                        }
                    }
                    //a--;
                }
            }
            if(m==1)
                cout<<"Test #"<<i<<": Non-symmetric.\n";
            else
                cout<<"Test #"<<i<<": Symmetric.\n";
        }
    }
    return 0;
}
