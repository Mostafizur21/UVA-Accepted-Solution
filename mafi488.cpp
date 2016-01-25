#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i,j,k,m,n,p,q;
    scanf("%d",&p);
        while(p--)
        {
            scanf("%d%d",&m,&n);
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=m;j++)
                {
                    for(k=1;k<=j;k++)
                        printf("%d",j);
                    printf("\n");
                }
                for(j=m-1;j>=1;j--)
                {
                    for(k=1;k<=j;k++)
                        printf("%d",j);
                    printf("\n");
                }
                if(i<n)
                printf("\n");
            }
            if(p)
            printf("\n");
        }
    return 0;
}
