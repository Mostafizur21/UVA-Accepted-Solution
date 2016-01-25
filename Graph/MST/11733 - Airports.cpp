#include <bits/stdc++.h>

using namespace std;

int p[10002],rank[10002];

struct data
{
    int a,b,c;

    bool operator<(const data &p)const
    {
        return c>p.c;
    }

} dt;

int Find(int x)
{
    if(x==p[x])
        return x;

    else
        return p[x] = Find(p[x]);
}

int Union(int a,int b)
{
    if(rank[a]<rank[b])

        p[a] = Find(b);

    else
    {
        p[b] = Find(a);

        if(rank[a] ==rank[b])

            rank[a]++;
    }
}

int main()
{
    int node,edge,test,t,airport_cost;

    scanf("%d",&test);

    priority_queue<data>pq;

    for(t=1; t<=test; t++)
    {

        scanf("%d %d %d",&node,&edge,&airport_cost);

        int start,end,cost;

        for(int i=0; i<edge; i++)
        {

            scanf("%d %d %d",&start,&end,&cost);

            if(cost<airport_cost)
            {
                dt.a = start;

                dt.b = end;

                dt.c = cost;

                pq.push(dt);
            }

        }

        for(int i=1; i<=node; i++)
        {
            p[i]=i;
            rank[i]=i;
        }

        int total_cost = 0,cnt = 0;

        while(!pq.empty())
        {
            if(cnt == node-1)
            {
                break;
            }

            int x,y,z;

            x = pq.top().a;

            y = pq.top().b;

            z = pq.top().c;

            int PA = Find(x);

            int PB = Find(y);

            if(PA!=PB)
            {
                cnt++;

                total_cost+=z;

                Union(PA,PB);
            }

            pq.pop();

        }

        int airport_no=1,arr[10002];

        for(int i=1; i<=node; i++)
        {
            arr[i]=Find(i);
        }

        sort(arr+1,arr+1+node);

        for(int i=1; i<node; i++)
        {
            if(arr[i]!=arr[i+1])
                airport_no++;
        }

        while(!pq.empty())
            pq.pop();

        printf("Case #%d: %d %d\n",t,total_cost+airport_cost*airport_no,airport_no);
    }

    return 0;

}
