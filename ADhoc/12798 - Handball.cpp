#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,M,check,result,m;

    while(scanf("%d%d",&N,&M)!=EOF)
    {
        result = 0;

        for(int i=1;i<=N;i++)
        {
            check = 0;

            for(int j=1;j<=M;j++)
            {
                scanf("%d",&m);
                if(!m)
                    check = 1;
            }

            if(!check)
                result++;
        }

        printf("%d\n",result);
    }

    return 0;
}
