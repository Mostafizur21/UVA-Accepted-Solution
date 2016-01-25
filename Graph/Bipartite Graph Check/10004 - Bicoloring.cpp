#include<bits/stdc++.h>
using namespace std;

int color[205],ans;

int bfs(int source,vector<int>graph[205])
{
        queue<int>q;
        q.push(0);
        color[0]=0;
        while(!q.empty())
        {
            int top=q.front();
            q.pop();
            for(int i=0;i<graph[top].size();i++)
            {
                int v=graph[top][i];
                if(color[v]==-1)
                {
                    if(color[top]==0)
                        color[v]=1;
                    else
                        color[v]=0;
                    q.push(v);
                }
                else
                {
                    if(color[v]==color[top])
                    {
                        ans=1;
                        break;
                    }
                }
            }
            if(ans==1)
                break;
        }
    return ans;
}

int main()
{
    int edges,i,from,to,nodes,m;
    while(scanf("%d",&nodes)&&nodes!=0)
    {
        ans=0;

        vector<int>graph[205];

        scanf("%d",&edges);

        for(i=0;i<edges;i++)
        {
            scanf("%d %d",&from,&to);
            graph[from].push_back(to);
            graph[to].push_back(from);
        }

        memset(color,-1,sizeof(color));

        m=bfs(0,graph);

        if(m==1)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
    }
    return 0;
}
