#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,i,j,m,n;
    while(cin>>N)
    {
        int a[100]= {0};
        n=0;
        if(N==0)
            break;
        for(i=2; i<=N ; i++)
        {
            m = i;
            while(m%2==0)
            {
                a[2]++;
                m/=2;
            }

            for(j=3; j*j<=m; j+=2)
            {
                while(m%j==0)
                {
                    a[j]++;
                    m/=j;
                }
            }
            if(m!=1)
                a[m]++;
        }

        printf("%3d! =",N);
        for(j=0; j<100; j++)
        {

            if(a[j])
            {
                n++;
                if(n>15)
                {
                    cout<<endl;
                    n=0;
                    printf("%9d",a[j]);
                }
                else
                    printf("%3d",a[j]);
            }
        }
        cout<<endl;
    }
    return 0;
}
