#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int N,M,i,j,k,a[10000],b,c,d,e,result;
    while(scanf("%d %d",&N,&M)!=EOF)
    {
        result=0;
        for(i=N;i<=M;i++)
        {
            b=0;
            e=0;
            j=i;
            while(j>=1)
            {
                a[b++]=j%10;
                j=j/10;
            }

            for(c=0;c<b-1;c++)
            {
                for(d=b-1;c<d;d--)
                {
                     if(a[d]<a[d-1])
                     {
                         swap(a[d],a[d-1]);
                     }
                 }
            }
            if(b==1)
                result++;
            for(k=0;k<b-1;k++)
            {
                if(a[k]==a[k+1])
                {
                    e=0;
                    break;
                }
                else
                    e=1;
            }
            if(e==1)
                result++;
        }
        cout<<result<<endl;
    }
    return 0;
}
