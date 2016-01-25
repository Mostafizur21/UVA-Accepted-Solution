#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int test,arr[5],i,j,k,m,n;
    while(scanf("%d",&test))
    {
        if(test==0)
            break;
        for(i=1;i<=test;i++)
        {
            for(j=0;j<5;j++)
                cin>>arr[j];
            if(arr[0]<=127&&arr[1]>127&&arr[2]>127&&arr[3]>127&&arr[4]>127)
                cout<<"A"<<endl;
            else if(arr[1]<=127&&arr[0]>127&&arr[2]>127&&arr[3]>127&&arr[4]>127)
                cout<<"B"<<endl;
            else if(arr[2]<=127&&arr[1]>127&&arr[0]>127&&arr[3]>127&&arr[4]>127)
                cout<<"C"<<endl;
            else if(arr[3]<=127&&arr[1]>127&&arr[2]>127&&arr[0]>127&&arr[4]>127)
                cout<<"D"<<endl;
            else if(arr[4]<=127&&arr[1]>127&&arr[2]>127&&arr[3]>127&&arr[0]>127)
                cout<<"E"<<endl;
            else
                cout<<"*"<<endl;
        }
    }
    return 0;
}
