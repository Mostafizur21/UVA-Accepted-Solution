#include<bits/stdc++.h>

using namespace std;

vector<int>v[1000001];

int main()
{
    int x,y,n,m,check,i,j,k;

    while(scanf("%d%d",&n,&m))
    {
        vector<int>topsort,index,visited;

        for(int i=0; i<=n; i++)
            v[i].clear();

        check=0;

        if(n==0&&m==0)
            break;

        for(i = 0; i<=n; i++)
        {
            index.push_back(0);

            visited.push_back(0);
        }


        for(i=0; i<m; i++)
        {
            scanf("%d%d",&x,&y);

            v[x].push_back(y);

            index[y]++;

        }

        queue<int>q;

        for(int i=1; i<=n; i++)
        {
            if(!index[i])
                q.push(i);
        }

        int cnt=0;

        while(!q.empty())
        {
            int u = q.front();

            q.pop();

            cnt++;

            topsort.push_back(u);

            for(int i=0; i<v[u].size(); i++)
            {
                index[v[u][i]]--;

                if(!index[v[u][i]])
                    q.push(v[u][i]);
            }

        }

        if(cnt!=n)
            cout<<"IMPOSSIBLE"<<endl;

        else
            for(i=0; i<topsort.size(); i++)
                printf("%d\n",topsort[i]);
    }

    return 0;

}
