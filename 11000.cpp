#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    long long int year,male_bees,total_bees,i,j,k,m;
    while(scanf("%lld",&year))
    {
        if(year==-1)
            break;
        j=0;
        k=0;
        m=1;
        male_bees=0;
        total_bees=0;
        for(i=1; i<=year+1; i++)
        {
            male_bees=male_bees+j;
            j=k+m;
            total_bees=total_bees+j;
            m=k;
            k=j;
        }
        printf("%lld %lld\n",male_bees,total_bees);
    }
    return 0;
}
