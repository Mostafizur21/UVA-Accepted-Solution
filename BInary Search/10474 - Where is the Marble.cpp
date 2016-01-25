#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#define MAX 10000
#include<algorithm>

int arr[MAX];

using namespace std;

int main()
{
   int i,j,k,test=1,total_marbels,total_query,b[10000],low,high,mid;
   while(scanf("%d %d",&total_marbels,&total_query))
   {
       if(total_marbels==0&&total_query==0)
        break;
       for(i=0;i<total_marbels;i++)
          scanf("%d",&arr[i]);
       for(j=0;j<total_query;j++)
                scanf("%d",&b[j]);
       sort(arr,arr+total_marbels);
       printf("CASE# %d:\n",test++);
       for(k=0;k<total_query;k++)
       {
            low=0;
           high=total_marbels-1;
           while(low<high)
           {
               mid=(low+high)/2;
               if(arr[mid]<b[k])
                low=mid+1;
               else
                high=mid;
           }
           if(b[k]==arr[low])
              printf("%d found at %d\n",b[k],low+1);
           else
              printf("%d not found\n",b[k]);
       }
   }
   return 0;
}

