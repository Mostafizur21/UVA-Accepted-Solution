#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    string a[300],b[300],c;
    int i,j,k,N,Q;
    while(cin>>N)
    {
         getchar();
        for(i=0;i<N;i++)
        {
            getline(cin,a[i]);
            getline(cin,b[i]);
        }
        cin>>Q;
        getchar();
        for(j=1;j<=Q;j++)
        {
            getline(cin,c);
            for(k=0;k<N;k++)
            {
                if(a[k]==c)
                {
                      cout<<b[k]<<endl;
                      break;
                }
            }
        }
    }
    return 0;
}
