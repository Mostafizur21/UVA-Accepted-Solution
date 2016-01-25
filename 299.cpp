#include<iostream>
#include<cstdio>
#define MAX 100000000

int a[MAX];

using namespace std;

int main()
{
    long long int i,j,k,m,n,p,d,b,q;
    while(scanf("%lld",&d)!=EOF)
    {
        for(q=1;q<=d;q++)
        {
            scanf("%lld",&n);
            for(i=0;i<n;i++)
            cin>>a[i];
            m=0;
            for(j=0;j<n;j++)
            {
                for(p=0;p<n;p++)
                {
                    if(a[p]>a[p+1])
                    {
                        b=p+1;
                        if(b==n)
                        break;
                        m++;
                        k=a[b];
                        a[b]=a[p];
                        a[p]=k;
                    }
                }
            }
        cout<<"Optimal train swapping takes "<<m<<" swaps."<<endl;
        }
    }
    return 0;
}
