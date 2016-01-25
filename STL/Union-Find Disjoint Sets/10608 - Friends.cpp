#include<bits/stdc++.h>

using namespace std;

int node,edge,parent[30005];

int union_find(int x)
{
    if(parent[x]==x)
        return x;
    else
        return parent[x]=union_find(parent[x]);
}

int main()
{
    int m,n,p,test,a,b;

    scanf("%d",&test);

    for(int x=1; x<=test; x++)
    {
        p=0;

        scanf("%d %d",&node,&edge);

        for(int i=1; i<=node; i++)
            parent[i]=i;

        for(int i=0; i<edge; i++)
        {
            scanf("%d %d",&a,&b);

            m=union_find(a);

            n=union_find(b);

            parent[m]=n;
        }

        int temp[30005]= {0};

        for(int i=1; i<=node; i++)
        {
            int pp = union_find(i);

            temp[pp]++;
        }

        int maxi=0;

        for(int i=1; i<=node; i++)
        {
            maxi = max(maxi,temp[i]);
        }

        printf("%d\n", maxi);

    }

    return 0;

}
