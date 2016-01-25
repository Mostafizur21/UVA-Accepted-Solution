#include<stdio.h>

int main ()
{
    int perfect_number[6]= {2,3,5,7,13,17};

    int n,t,i,flag;

    char c;

    scanf("%d",&t);

    while(t--)
    {
        if(t==0)

            scanf("%d",&n);

        else

            scanf("%d%c",&n,&c);

        for(i = 0; i<6; i++)
        {

            if(n==perfect_number[i])
            {

                flag = 1;

                break;
            }

        }

        if(flag==1)

            printf("Yes\n");

        else

            printf("No\n");

        flag =0;

    }

    return 0 ;

}
