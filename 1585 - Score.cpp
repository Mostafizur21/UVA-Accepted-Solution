#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,sum,m,i,j,len;

    scanf("%d",&test);
    getchar();
    while(test--)
    {
        sum=m=0;
        char ch[80];
        scanf("%s",&ch);
        len=strlen(ch);
        for(i=0;i<len;i++)
        {
            if(ch[i]=='O')
            {
                m++;
                i++;
                for(j=i;j<len;j++)
                {
                    m++;
                    if(ch[j]=='X')
                    {
                        m--;
                        sum += (m*m+m)/2;
                        m=0;
                        break;
                    }
                }
                i=j;
            }
        }
        if(m>0)
        {
            sum += (m*m+m)/2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
