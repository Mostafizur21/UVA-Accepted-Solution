#include<bits/stdc++.h>
using namespace std;

int main()
{
    int index[101],visited[101],x,y,n,m,arr[101],topsort[101],in;

    vector<int>v[101];

    while(scanf("%d%d",&n,&m))
    {
        if(n==0&&m==0)
            break;

        in=0;

        for(int i=0; i<=n; i++)
            v[i].clear();

        memset(index,0,sizeof(index));
        memset(visited,0,sizeof(visited));

        for(int i=0; i<m; i++)
        {
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            index[y]++;
        }

        for(int i=1; i<=n; i++)
        {
            int a=0;

            if(n==in)//if all the task has been done.then no need to continue
                break;

            for(int k=1; k<=n; k++)//for lexico ordering
            {

                if(index[k]==0 && !visited[k])
                {
                    topsort[in++]=k;
                    arr[a++]=k;
                }
            }

            for(int b=0; b<a; b++)//jei node ta etar upor nirvorshil chilo setar indee minus kora
            {
                int p = arr[b];
                for(int j=0; j<v[p].size(); j++)
                {
                    int temp = v[p][j];
                    index[temp]--;
                }
                visited[p]=1;
            }
        }

        for(int i=0; i<n-1; i++)
            printf("%d ",topsort[i]);
        printf("%d\n",topsort[n-1]);
    }
    return 0;
}
