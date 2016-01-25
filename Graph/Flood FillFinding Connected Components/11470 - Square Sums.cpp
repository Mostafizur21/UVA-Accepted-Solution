#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<utility>
#include<complex>
#include<stack>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<deque>
#include<list>
#include<stdexcept>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<ctime>

using namespace std;

int main()
{
    int number,arr[11][11],i,j,k,n,m=1,a[11],sum;
    while(scanf("%d",&number))
    {
        if(number==0)
            break;
            n=k=0;
        for(i=0;i<number;i++)
        {
            for(j=0;j<number;j++)
                scanf("%d",&arr[i][j]);
        }
        while(number-2*k>=1)
        {
            sum=0;
            for(i=k;i<number-k;i++)
            {
                for(j=k;j<number-k;j++)
                {
                    if(i==k||j==k||i==number-k-1||j==number-k-1)
                        sum+=arr[i][j];
                }
            }
            a[n++]=sum;
            k++;
        }
//        cout<<"Case "<<m++<<":";
         printf("Case %d:",m++);
        for(i=0;i<n;i++)
//            cout<<" "<<a[i];
              printf(" %d",a[i]);
//        cout<<endl;
        printf("\n");
    }
    return 0;
}
