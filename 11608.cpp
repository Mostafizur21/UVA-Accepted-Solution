#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int ready_problem,creat_problem[15],require_problem[15],i,j,k,m=1,sum;
    while(scanf("%d",&ready_problem))
    {
        sum=0;
        sum=ready_problem;
        if(ready_problem<0)
            break;
        for(i=0;i<12;i++)
            cin>>creat_problem[i];
        for(j=0;j<12;j++)
            cin>>require_problem[j];
        cout<<"Case "<<m++<<":\n";
        for(k=0;k<12;k++)
        {
            if(require_problem[k]<=sum)
            {
                cout<<"No problem! :D\n";
                sum-=require_problem[k];
            }
            else
                cout<<"No problem. :(\n";
            sum=sum+creat_problem[k];
        }
    }
    return 0;
}
