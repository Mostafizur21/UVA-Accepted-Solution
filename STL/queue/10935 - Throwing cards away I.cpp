#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a[55],b[55],i,j,k,m,n,p;
    while(scanf("%d",&m)!=EOF)
    {
        if(m==0)
            break;
        n=2;
        p=1;
        for(i=0;i<m;i++)
            a[i]=p++;
        for(i=0;i<m;i++)
        {
            b[i]=a[0];
            k=a[1];
            for(j=0;j<m-n;j++)
            {
                a[j]=a[j+2];
            }
            n++;
            a[j]=k;
        }
        if(m==1)
             cout<<"Discarded cards:";
        if(m>1)
        cout<<"Discarded cards: ";
        for(i=0;i<m-1;i++)
        {
                cout<<b[i];
                if(i<m-2)
                cout<<", ";
        }
            cout<<endl;
         cout<<"Remaining card: ";
         cout<<b[i]<<endl;
    }
    return 0;
}
