#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    char input[1000005];
    int test,i,j,k,m,n=1,a;
    while(scanf("%s",input)==1)
    {
        if(strcmp(input,"\n")==0)
            break;
        printf("Case %d:\n",n++);
        scanf("%d",&test);
        for(m=1;m<=test;m++)
        {
            a=0;
            scanf("%d %d",&i,&j);
           if(i>j)
           {
               int temp=i;
               i=j;
               j=temp;
           }
            for(k=i;k<j;k++)
            {
                if(input[k]==input[k+1])
                    continue;
                else
                {
                    a=1;
                    break;
                }
            }
            if(a==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
