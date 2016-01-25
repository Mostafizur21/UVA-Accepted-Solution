#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int test,n,p,q,i,j,k,m,arr_n[100],result,sum_of_eggs_weight;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            result=0;
            sum_of_eggs_weight=0;
            cin>>n>>p>>q;
            for(j=0;j<n;j++)
                cin>>arr_n[j];
            for(k=0;k<n;k++)
            {
                sum_of_eggs_weight=sum_of_eggs_weight+arr_n[k];
                result++;
                if(result>p||sum_of_eggs_weight>q)
                {
                    result--;
                    break;
                }
            }
            cout<<"Case "<<i<<": "<<result<<endl;
        }
    }
    return 0;
}
