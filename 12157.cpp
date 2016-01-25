#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int test,number,input[50],i,j,k,m,n,a,b,p,q,r,s,cost1,cost2;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            q=0;
            s=0;
            cin>>number;
            for(j=0;j<number;j++)
                cin>>input[j];
            for(k=0;k<number;k++)
            {
                if(input[k]>29)
                {
                    m=input[k]-29;
                    n=m/30;
                    if(m%30==0)
                        a=0;
                    else
                        a=1;
                    q=q+n+a+1;
                }
                else
                    q=q+1;
                if(input[k]>59)
                {
                    p=input[k]-59;
                    r=p/60;
                    if(p%60==0)
                        b=0;
                    else
                        b=1;
                    s=s+r+b+1;
                }
                else
                    s=s+1;
            }
            cost1=q*10;
            cost2=s*15;
            if(cost1<cost2)
                cout<<"Case "<<i<<": Mile "<<cost1<<endl;
            else if(cost1>cost2)
                cout<<"Case "<<i<<": Juice "<<cost2<<endl;
            else
                cout<<"Case "<<i<<": Mile Juice "<<cost1<<endl;
        }
    }
    return 0;
}
