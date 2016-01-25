#include<bits/stdc++.h>

using namespace std;

#define siz 1000005
#define INF INT_MAX

int N,E,d[siz];

struct data
{
    int u,v,c;
} a[siz];

void bellmanFord()
{
    d[0]=0;
    for(int i=0; i<N-1; i++)
    {
        for(int j=0; j<E; j++)
        {
            if(d[a[j].u]+a[j].c<d[a[j].v])
            {
                d[a[j].v]=d[a[j].u]+a[j].c;
            }
        }
    }

    bool flag=false;

    for(int j=0; j<E; j++)
    {
        if(d[a[j].u]+a[j].c<d[a[j].v])
        {
            flag=true;
            break;
        }
    }

    if(flag==true)
        puts("possible");

    else
        puts("not possible");
}

void reset()
{
    for(int i=0; i<=N; i++)
    {
        d[i]=INF;
    }
}

int main()
{
    int n,u,v,c;

    scanf("%d",&n);

    for(int t=0; t<n; t++)
    {
        scanf("%d%d",&N,&E);

        reset();

        for(int i=0; i<E; i++)
        {
            scanf("%d%d%d",&u,&v,&c);
            a[i].u=u;
            a[i].v=v;
            a[i].c=c;
        }

        bellmanFord();
    }
    return 0;
}
