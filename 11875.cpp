#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cmath>

using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a[100],number,i,j,k,m,n,test;
    while(scanf("%d",&test)!=EOF)
    {
        for(n=1;n<=test;n++)
        {
            cin>>number;
            for(i=0;i<number;i++)
                cin>>a[i];
            for(j=0;j<number-1;j++)
            {
                for(k=number-1;j<k;k--)
                {
                    if(a[k]<a[k-1])
                    {
                        swap(a[k],a[k-1]);
                    }
                }
            }
            m=number/2;
                cout<<"Case "<<n<<": "<<a[m]<<endl;
        }
    }
    return 0;
}
