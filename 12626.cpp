#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int test,output,i,j,k,m,n,p,q,r,arr[6],a;
    char ch[601];
    while(scanf("%d",&test)!=EOF)
    {
        getchar();
        for(i=1;i<=test;i++)
        {
            output=k=m=n=p=q=j=a=0;
            scanf("%s",&ch);
            for(r=0;ch[r]!='\0';r++)
            {
                if(ch[r]=='M')
                    k++;

                else if(ch[r]=='A')
                    m++;

                else if(ch[r]=='R')
                    n++;

                else if(ch[r]=='G')
                    p++;

                else if(ch[r]=='I')
                    q++;

                else if(ch[r]=='T')
                    j++;
            }
            arr[a++]=k/1;
            arr[a++]=m/3;
            arr[a++]=n/2;
            arr[a++]=p/1;
            arr[a++]=q/1;
            arr[a++]=j/1;
            sort(arr,arr+a);
            printf("%d\n",arr[0]);
        }
    }
    return 0;
}
