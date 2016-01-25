#include<bits/stdc++.h>
#define ll long long
#define MAX 30000005

using namespace std;

bool  prime[MAX];

ll PRIME[6645850];

int ind=0;

void seive()
{
    for(int i=3; i<=MAX; i+=2)
        prime[i]=true;

    prime[2]=true;

    int k=sqrt(MAX);

    for(int i=3; i<=k; i+=2)
    {
        if(prime[i]==true)

            for(int j=i*i; j<=MAX; j+=(2*i))
                prime[j]=false;
    }

    PRIME[ind++] = 2;

    for(int i=3; i<=MAX; i+=2)
    {
        if(prime[i])
            PRIME[ind++] = i;
    }

}


int main()
{

    ll n,cnt,test,m;

    seive();

    while( scanf("%lld",&n)!=EOF)
    {
        cnt=1;

        ll div=0;

        m=n;

        for(ll i=0; PRIME[i]<=sqrt(n)&&i<ind; i++)
        {
            if((n/PRIME[i])*PRIME[i]==n)
            {
                div=0;
                while((n/PRIME[i])*PRIME[i]==n)
                {
                    div++;
                    n/=PRIME[i];
                }

                if(i!=0)
                    cnt*=(div+1);
            }
        }

        if(n>1&&n!=2)//as two can not make the sum
            cnt*=2;

        cnt-=1;

        if(cnt<0)
            cnt=0;

        printf("%lld\n",cnt+1);

    }

    return 0;
}
