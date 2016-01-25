#include <bits/stdc++.h>

using namespace std;

int p[200000+5],rank[200000+5];

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
    int node,edge;

    while(cin>>node>>edge && node && edge)
    {

        priority_queue<data>pq;

        int start,end,cost,sum=0;

        for(int i=0; i<edge; i++)
        {
            cin>>start>>end>>cost;

            dt.a = start;

            dt.b = end;

            dt.c = cost;

            sum+=cost;

            p[i] = i;

            rank[i] = 0;

            pq.push(dt);

        }

        int total_cost = 0,cnt = 0;

        while(!pq.empty())
        {
            if(cnt == node-1)
            {
                cout<<sum-total_cost<<endl;

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

    }

    return 0;

}
