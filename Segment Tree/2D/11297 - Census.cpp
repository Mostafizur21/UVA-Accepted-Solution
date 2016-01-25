#include <bits/stdc++.h>
#define mx 505
#define INF 1000000

using namespace std;

int Max_tree[mx*3][mx*3],Min_tree[mx*3][mx*3],N,R1,R2,C1,C2,R,C,v,maximum,minimum,check;


void update_1D(int prev_node,int curr_node,int b,int e)
{
    if(b>C||e<C)
        return;

    if(b==e)
    {
        if(check)
        {
            Max_tree[prev_node][curr_node] = v;

            Min_tree[prev_node][curr_node] = v;
        }

        else
        {
            Max_tree[prev_node][curr_node] = max(Max_tree[prev_node*2][curr_node],Max_tree[prev_node*2+1][curr_node]);

            Min_tree[prev_node][curr_node] = min(Min_tree[prev_node*2][curr_node],Min_tree[prev_node*2+1][curr_node]);
        }

        return;
    }

    int left = curr_node<<1;

    int right = left+1;

    int mid = (b+e)>>1;

    update_1D(prev_node,left,b,mid);

    update_1D(prev_node,right,mid+1,e);

    Max_tree[prev_node][curr_node] = max(Max_tree[prev_node][left],Max_tree[prev_node][right]);

    Min_tree[prev_node][curr_node] = min(Min_tree[prev_node][left],Min_tree[prev_node][right]);

}

void update_2D(int node,int b,int e)
{

    if(b>R|| e<R)
        return;

    if(b==e)
    {
        check = 1;

        update_1D(node,1,1,N);

        return;
    }

    int left = node<<1;

    int right = left+1;

    int mid = (b+e)>>1;

    update_2D(left,b,mid);

    update_2D(right,mid+1,e);

    check = 0;

    update_1D(node,1,1,N);

}

void query_1D(int prev_node,int curr_node,int b,int e)
{
    if(C1>e||C2<b)
        return;

    if(b>=C1&&e<=C2)
    {
        maximum = max(maximum,Max_tree[prev_node][curr_node]);

        minimum = min(minimum,Min_tree[prev_node][curr_node]);

        return;
    }

    int mid = (b+e)>>1;

    query_1D(prev_node,curr_node*2,b,mid);

    query_1D(prev_node,curr_node*2+1,mid+1,e);

}

void query_2D(int node,int b,int e)
{
    if(R1>e||R2<b)
        return;

    if(b>=R1&&e<=R2)
    {
        query_1D(node,1,1,N);
        return;
    }

    int mid = (b+e)>>1;

    query_2D(node*2,b,mid);

    query_2D(node*2+1,mid+1,e);

}


int main()
{
    int Q,S,n;

    char c;

    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            scanf("%d",&v);

            R = i,C= j;

            update_2D(1,1,N);
        }
    }

    scanf("%d",&Q);

    while(Q--)
    {
        getchar();

        scanf("%c",&c);

        if(c=='q')
        {
            scanf("%d %d %d %d",&R1,&C1,&R2,&C2);

            maximum = -INF;

            minimum = INF;

            query_2D(1,1,N);

            printf("%d %d\n",maximum,minimum);

        }

        else
        {
            scanf("%d %d %d",&R,&C,&v);

            update_2D(1,1,N);

        }

    }

    return 0;
}
