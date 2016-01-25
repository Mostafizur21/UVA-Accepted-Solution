#include<bits/stdc++.h>

using namespace std;

#define siz 500005
#define INF INT_MAX

vector <int> vec[siz],cost[siz];

int d[siz],N,E;

struct data
{
    int city,dist;

    bool operator < (const data &p) const
    {

        return dist > p.dist;

    }

};


int dijkstra(int source,int destination)
{

    priority_queue<data> q;

    data u, v;

    u.city = source, u.dist = 0;

    q.push( u );

    d[ source] = 0;

    while( !q.empty() )
    {

        u = q.top();
        q.pop();

        for(int i=0; i<vec[u.city].size(); i++)
        {

            v.city = vec[u.city][i], v.dist = cost[u.city][i] + d[ u.city ];

            if( d[v.city] > v.dist )
            {

                d[v.city] = v.dist;

                q.push( v );

            }

        }

    }


    return d[destination];

}


void reset()
{

    for(int i=0; i<=N; i++)
    {

        d[i]=INF;

        vec[i].clear();

        cost[i].clear();

    }

}

int main()
{

    int u,v,c,t,source,destination;

    cin>>t;

    for(int i=1; i<=t; i++)
    {

        scanf("%d%d%d%d",&N,&E,&source,&destination);

        reset();

        for(int i=0; i<E; i++)
        {

            scanf("%d%d%d",&u,&v,&c);

            vec[u].push_back(v);

            vec[v].push_back(u);

            cost[u].push_back(c);

            cost[v].push_back(c);

        }

        int re = dijkstra(source,destination);

        if(re==INF)
            cout<<"Case #"<<i<<": unreachable"<<endl;

        else
            cout<<"Case #"<<i<<": "<<re<<endl;

    }
    return 0;
}
