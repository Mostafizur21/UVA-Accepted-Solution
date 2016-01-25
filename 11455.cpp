//****Accepted*****//
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#define MAX 20
#define TRUE 1
#define FALSE 0

int arr[MAX];

using namespace std;

void quickshort(int a[],int leftelements,int rightelements)
{
    int m,n,flag=FALSE,partit,tempelement;
    if(rightelements>leftelements)
    {
        m=leftelements;
        n=rightelements;
        partit=a[leftelements];
        flag=FALSE;
        while(!flag)
        {
            do
            {
                ++m;
            }while((a[m]<=partit)&&(m<=rightelements));
            while((a[n]>=partit)&&(n>leftelements))
            {
                --n;
            }
            if(n<m)
            {
                flag=TRUE;
            }
            else
            {
                tempelement=a[m];
                a[m]=a[n];
                a[n]=tempelement;
            }
        }
        tempelement=a[leftelements];
        a[leftelements]=a[n];
        a[n]=tempelement;
        quickshort(a,leftelements,n-1);
        quickshort(a,m,rightelements);
    }
    return;
}

int main()
{
   int i,left,right,test;
   while(scanf("%d",&test)!=EOF)
   {
       for(int j=1;j<=test;j++)
      {
            for(int k=0;k<4;k++)
            {
                cin>>arr[k];
            }
           left=0;
           right=3;
           quickshort(arr,left,right);
           if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]==arr[3])
               cout<<"square\n";
           else if(arr[0]==arr[1]&&arr[2]==arr[3])
               cout<<"rectangle\n";
           else if(arr[0]+arr[1]+arr[2]>arr[3])
               cout<<"quadrangle\n";
           else
               cout<<"banana\n";
      }
   }
   return 0;
}
