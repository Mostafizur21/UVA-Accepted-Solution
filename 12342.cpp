#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int test,i,j,k,m,n,p,q;
    double a,b,c,d,e,f,tax,input;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            tax=0.0;
            cin>>input;
            if(input<=180000.0)
                tax=0.0;
            else if(input>180000.0&&input<=480000.0)
            {
                tax=(input-180000.0)*0.1;
            }

            else if(input>480000.0&&input<=880000.0)
            {
                tax=((input-480000.0)*.15)+30000.0;
            }

             else if(input>880000.0&&input<=1180000.0)
            {
                tax=((input-880000.0)*.2)+90000.0;
            }

             else if(input>1180000.0)
            {
                tax=((input-1180000.0)*.25)+150000.0;
            }

            if(tax>0.0&&tax<2000.0)
                tax=2000.0;
             p=static_cast<int>(tax);
            if(p<tax)
                p++;
            cout<<"Case "<<i<<": "<<p<<endl;
        }
    }
    return 0;
}
