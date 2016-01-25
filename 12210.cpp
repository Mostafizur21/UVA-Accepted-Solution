#include<iostream>
#include<cstdio>
#define MAX 10000
#include<algorithm>

int arr[MAX];
int arr1[MAX];

using namespace std;

int main()
{
   int i,bachelors,spinsters,n=1;
   while(scanf("%d%d",&bachelors,&spinsters))
   {
       if(bachelors==0&&spinsters==0)
            break;
       for(i=0;i<bachelors;i++)
           scanf("%d",&arr[i]);
        for(i=0;i<spinsters;i++)
            scanf("%d",&arr1[i]);
        if(bachelors<=spinsters)
            printf("Case %d: 0\n",n);
        else
        {
            sort(arr,arr+i);
            printf("Case %d: %d %d\n",n,bachelors-spinsters,arr[0]);
        }
        n++;
   }
   return 0;
}
