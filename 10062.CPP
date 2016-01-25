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
     char ch[100],c;
     string input;
     int arr[100],i,j,k,m,n,p,q,a,b,d,e=0;
     while(getline(cin,input))
     {
         if(e==1)
            printf("\n");
         n=0;
         for(i=32;i<=128;i++)
         {
             m=0;
             for(j=0;input[j]!='\0';j++)
             {
                 if(input[j]==i)
                    m++;
             }
             if(m!=0)
             {
                ch[n]=i;
                arr[n]=m;
                n++;
             }
         }
         ch[n]='\0';
         for(a=0;a<n;a++)
         {
             for(b=0;b<n;b++)
             {
                 if(arr[a]<arr[b])
                 {
                     d=arr[a];
                     arr[a]=arr[b];
                     arr[b]=d;
                     c=ch[a];
                     ch[a]=ch[b];
                     ch[b]=c;
                 }
                 if(arr[a]==arr[b])
                 {
                     if(ch[a]>ch[b])
                     {
                         d=arr[a];
                         arr[a]=arr[b];
                         arr[b]=d;
                         c=ch[a];
                         ch[a]=ch[b];
                         ch[b]=c;
                     }
                 }
             }
         }
         for(k=0;k<n;k++)
         {
             p=ch[k];
             cout<<p<<" "<<arr[k]<<endl;
         }
         e=1;
     }
    return 0;
}
