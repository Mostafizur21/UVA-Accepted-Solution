#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
    int test,sparrow_subject,D,i,j,k,m,n,a[101];
    string comfotable_subject[101],homework_subject;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            m=0;
            scanf("%d",&sparrow_subject);
            getchar();
            for(j=0;j<sparrow_subject;j++)
            {
                 cin>>comfotable_subject[j];
                 scanf("%d",&a[j]);
            }

            scanf("%d",&D);
            getchar();
            cin>>homework_subject;
            for(k=0;k<sparrow_subject;k++)
            {
                if(homework_subject==comfotable_subject[k])
                {
                    if(D>=a[k])
                    {
                        printf("Case %d: Yesss\n",i);
                        m=1;
                        break;
                    }

                    else if(D+5>=a[k])
                    {
                        printf("Case %d: Late\n",i);
                        m=1;
                        break;
                    }
                }
            }
            if(m==0)
                printf("Case %d: Do your own homework!\n",i);
        }
    }
    return 0;
}
