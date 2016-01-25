#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll arr[100005],N,S,pos,tot,res,cont,track;

    while(scanf("%lld %lld",&N,&S)!=EOF)
    {

        for(int i=0; i<N; i++)
            scanf("%lld",&arr[i]);

        pos=0,track=0,tot=100005,cont=0;

        for(int i=0; i<N; i++)
        {
            track+=arr[i];

            cont++;

            if(track>=S)
            {
                if(tot>cont)
                    tot=cont;

                while(track>=S)
                {
                    track-=arr[pos];
                    pos++;
                    cont--;

                    if(tot>cont&&track>=S)
                        tot=cont;
                }
            }
        }

        if(tot==100005)
            tot=0;

        printf("%lld\n",tot);

    }

    return 0;
}
