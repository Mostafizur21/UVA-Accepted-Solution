#include <bits/stdc++.h>
#define mx 100005

using namespace std;

int arr[mx];

int temp1,temp2;

struct info
{
    int zero,neg;
} tree[mx*3];

void build_tree(int node,int b,int e)
{

    if(b==e)
    {
        if(arr[b]==0)
            tree[node].zero = 1;
        if(arr[b]<0)
            tree[node].neg = 1;
        return;
    }

    int left = node*2;

    int right = node*2+1;

    int mid = (b+e)/2;

    build_tree(left,b,mid);

    build_tree(right,mid+1,e);

    tree[node].zero = tree[left].zero|tree[right].zero;
    tree[node].neg = tree[left].neg+tree[right].neg;

}

void query(int node,int b,int e ,int i,int j)
{
    if(i>e||j<b)

        return ;

    if(b>=i&&e<=j)
    {
        temp1 += tree[node].zero;
        temp2 += tree[node].neg;
        return;

    }

    int left = node*2;

    int right = node*2+1;

    int mid = (b+e)/2;

    query(left,b,mid,i,j);

    query(right,mid+1,e,i,j);

    return ;


}

void update(int node,int b,int e,int i,int newvalue)
{

    if(i>e||i<b)
        return;

    if(b>=i&&e<=i)
    {
        tree[node].zero = 0;
        tree[node].neg = 0;
        if(newvalue==0)
            tree[node].zero = 1;
        if(newvalue<0)
            tree[node].neg = 1;
        return;

    }

    int left = node*2;

    int right = node*2+1;

    int mid = (b+e)/2;

    update(left,b,mid,i,newvalue);

    update(right,mid+1,e,i,newvalue);

    tree[node].zero = tree[left].zero|tree[right].zero;
    tree[node].neg = tree[left].neg+tree[right].neg;

}

int main()
{
    int n,q,i,j;

    char ch;

    while( scanf("%d %d",&n,&q)!=EOF)
    {
        for(int x=1; x<=n; x++)
            scanf("%d",&arr[x]);

        memset(tree,0,sizeof tree);

        build_tree(1,1,n);

        while(q--)
        {
            getchar();

            scanf("%c",&ch);

            scanf("%d %d",&i,&j);

            if(ch=='C')
                update(1,1,n,i,j);

            else
            {
                temp1 = temp2 =0;

                query(1,1,n,i,j);

                if(temp1)
                    printf("0");

                else if((temp2/2)*2!=temp2)
                    printf("-");

                else
                    printf("+");
            }
        }
        printf("\n");

    }

    return 0;
}
