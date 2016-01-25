#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<utility>
#include<complex>
#include<stack>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<deque>
#include<list>
#include<stdexcept>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<ctime>

using namespace std;
map<int ,int>visited;

void bfs(int source, map<int,vector<int> >graph)
{
    queue<int>q;
    q.push(source);
    visited[source]=0;
    while(!q.empty())
    {
        int top=q.front();
        for(int i=0; i<graph[top].size(); i++)
        {
            int v=graph[top][i];
            if(!visited.count(v))
            {
                visited[v]=visited[top]+1;
                q.push(v);
            }
        }
        q.pop();
    }
}

int main()
{
    int edges,cases=1,i,j,from,to,source,ttl,ans,nodes;
    while(scanf("%d",&edges))
    {
        if(edges==0)
            break;
        map<int,vector<int> >graph;
        for(i=0; i<edges; i++)
        {
            scanf("%d %d",&from,&to);
            graph[from].push_back(to);
            graph[to].push_back(from);
        }
        while(scanf("%d %d",&source,&ttl))
        {
            ans=0;
            if(source==0&&ttl==0)
                break;
            visited.clear();
            bfs(source,graph);
            map<int,int>::iterator it;
            for(it=visited.begin(); it!=visited.end(); it++)
            {
                if((*it).second>ttl)
                    ans++;
            }
            ans+=graph.size()-visited.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases++,ans,source,ttl);
        }
    }
    return 0;
}
