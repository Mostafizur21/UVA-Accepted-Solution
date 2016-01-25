#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int R,N,D,i,j,k,m,n=1;
    while(scanf("%d %d",&R,&N))
    {
        if(R==0&&N==0)
            break;
            D=0;
            m=R-N;
        if(m>N*26)
            cout<<"Case "<<n++<<": impossible\n";
        else
        {
            for(j=2;;j++)
            {
                if(N*j<R)
                    D++;
                else if(N*j>=R&&R>N)
                {
                    D++;
                    break;
                }
                else
                    break;
            }
            cout<<"Case "<<n++<<": "<<D<<endl;
        }
    }
    return 0;
}
