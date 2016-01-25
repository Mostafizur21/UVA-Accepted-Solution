#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int test,N,M,i,j,m,n,a;

    scanf("%lld",&test);

    for(i=1; i<=test; i++)
    {

        m=0;

        scanf("%lld%lld",&N,&M);

        if(M<N)

            printf("%lld\n",M);

        else if(N==2&&M==2)

            printf("0\n");

        else
        {

            for(j=1; j<=N; j++)
            {

                n=(j*(j+1))/2;

                if(n+N-1>=M)
                {

                    if(n+N-j-1==M)

                        printf("%lld\n",M-n);

                    else
                    {

                        a=M-n-N-j-2;

                        if(a<=j+1)
                        {

                            printf("%lld\n",N-j-2);

                            m=1;

                            break;
                        }

                    }

                }

            }

            if(m==0)

                printf("0\n");
        }

    }

    return 0;

}
