#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int test,N,K,P,i,j,m;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=1; i<=test; i++)
        {
            cin>>N>>K>>P;
            j=K+P;
            m=j%N;
            if(m==0)
                cout<<"Case "<<i<<": "<<N<<endl;
            else
                cout<<"Case "<<i<<": "<<m<<endl;
        }
    }
    return 0;
}
