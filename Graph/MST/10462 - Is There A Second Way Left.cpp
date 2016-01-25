#include <bits/stdc++.h>

using namespace std;

int p[101],rank[101],node;
vector<int>vec_mst1;

struct data
{
    int a,b,c;

    bool operator<(const data &p)const
    {
        return c<p.c;
    }

} dt;

vector<data>v;

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

int Kruskal()
{
    sort(v.begin(),v.end());

    for(int i=1; i<=node; i++)
        p[i]=i,rank[i]=0;

    int total_cost=0,cnt=0;

    for(int i=0; i<v.size(); i++)
    {
        int u = Find(v[i].a);
        int VV = Find(v[i].b);
        if(u!=VV)
        {
            vec_mst1.push_back(i);
            Union(u,VV);
            cnt++;
            total_cost+=v[i].c;
            if(cnt==node-1)
                break;
        }
    }

    if(cnt==node-1)
        return total_cost;

    return -1;
}

int MST2(int n)
{

    int total_cost=0,cnt=0;

    for(int i=0; i<v.size(); i++)
    {
        if(i!=n)
        {
            int u = Find(v[i].a);
            int VV = Find(v[i].b);
            if(u!=VV)
            {
                Union(u,VV);
                cnt++;
                total_cost+=v[i].c;
                if(cnt==node-1)
                    break;
            }
        }
    }

    if(cnt==node-1)
        return total_cost;

    return -1;
}


int main()
{
    int edge,test,t;

    scanf("%d",&test);

    for(t=1; t<=test; t++)
    {
        v.clear();
        vec_mst1.clear();
        scanf("%d %d",&node,&edge);

        int start,end,cost;

        for(int i=1; i<=edge; i++)
        {

            scanf("%d %d %d",&start,&end,&cost);

            dt.a = start;

            dt.b = end;

            dt.c = cost;

            v.push_back(dt);
        }

        sort(v.begin(),v.end());

        int mst1 = Kruskal();

        if(mst1==-1)
        {
            printf("Case #%d : No way\n",t);
        }
        else
        {
            int mst2=INT_MAX,val;

            for(int i=0; i<vec_mst1.size(); i++)
            {
                for(int j=1; j<=node; j++)
                    p[j]=j,rank[j]=0;

                val = MST2(vec_mst1[i]);

                if(val!=-1)
                    mst2 = min(mst2,val);
            }

            if(mst2==INT_MAX)
                printf("Case #%d : No second way\n",t);
            else
                printf("Case #%d : %d\n",t,mst2);

        }

    }
    return 0;
}
/*
5 4
1 2 5
3 2 5
4 2 5
5 4 5
5 3
1 2 5
3 2 5
5 4 5
5 5
1 2 5
3 2 5
4 2 5
5 4 5
4 5 6
1 0
*/
