#include<bits/stdc++.h>
using namespace std;

int dist[25];

int bfs(int source,int destination,vector<int>graph[25])
{
    queue<int>q;
    q.push(source);
    dist[source]=0;
    while(!q.empty())
    {
        int top=q.front();

        if(top==destination)
        {
            printf("%2d to %2d: %d\n",source,destination,dist[destination]);
            break;
        }

        for(int i=0; i<graph[top].size(); i++)
        {
            int v=graph[top][i];
            if(dist[v])
                continue;
            else
            {
                dist[v]=dist[top]+1;
                q.push(v);
            }
        }
        q.pop();
    }
    return 0;
}

int main()
{
    int edges,i,j,from,to,nodes,N,A,B,test=1;
    while(cin>>edges)
    {
        vector<int>graph[25];

        for(j=1; j<=edges; j++)
        {
            scanf("%d",&nodes);
            graph[1].push_back(nodes);
            graph[nodes].push_back(1);
        }

        for(i=2; i<=19; i++)
        {
            scanf("%d",&edges);
            for(j=1; j<=edges; j++)
            {
                scanf("%d",&nodes);
                graph[i].push_back(nodes);
                graph[nodes].push_back(i);
            }

        }
        scanf("%d",&N);
        printf("Test Set #%d\n",test++);
        for(i=1; i<=N; i++)
        {
            memset(dist,0,sizeof(dist));
            scanf("%d%d",&A,&B);
            bfs(A,B,graph);
        }
        cout<<endl;
    }
    return 0;
}
