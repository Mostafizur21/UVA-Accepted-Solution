#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#define MAX 100000000

int arr[MAX];

using namespace std;


int main()
{
   int i,left,right,totalelements;
   while(scanf("%d",&totalelements))
   {
       if(totalelements==0)
        break;
       for(i=0;i<totalelements;i++)
            cin>>arr[i];
       sort(arr,arr+totalelements);
       for(int j=0;j<totalelements;j++)
        {
            cout<<arr[j];
            if(j<=totalelements-2)
                cout<<" ";
        }
        cout<<endl;
   }
   return 0;
}
