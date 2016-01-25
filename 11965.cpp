#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int test,i,j,k,N;
    string a;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d",&N);
        getchar();
        printf("Case %d:\n",i);
        for(j=1;j<=N;j++)
        {
            getline(cin,a);
            for(k=0;k<a.size();k++)
            {
                if(k==0)
                    printf("%c",a[k]);
                else
                {
                    if(a[k-1]==' '&&a[k]==' ')
                        continue;
                    else
                       printf("%c",a[k]);
                }
            }
            printf("\n");
        }
        if(i<test)
            printf("\n");
    }
    return 0;
}
