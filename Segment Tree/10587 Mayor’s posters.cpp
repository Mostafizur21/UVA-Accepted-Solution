#include<bits/stdc++.h>
#define mx 10000000
#define ll long long

using namespace std;

struct info
{
    bool check,prop;
} tree[mx*4];


void update_lazy(int node,int from,int to)
{
    ll mid = (from+to)/2;

    tree[2*node].prop = 1;

    tree[2*node+1].prop = 1;

    tree[2*node].check = 1;

    tree[2*node+1].check = 1;

    tree[node].prop = 0;
}

void update(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e||j<b)
        return;

    if(b>=i&&e<=j)
    {
        tree[node].check = 1;
        tree[node].prop = 1;
        return;
    }

    if(tree[node].prop!=0)
        update_lazy(node,b,e);

    ll mid = (b+e)/2;

    update(2*node,b,mid,i,j);

    update(2*node+1,mid+1,e,i,j);

    tree[node].check = tree[2*node].check & tree[2*node+1].check;

}


ll query(ll node,ll b,ll e,ll i,ll j)
{

    if(i>e||j<b)
        return 0;

    if(b>=i&&e<=j)
    {
        if(tree[node].check!=0)
            return 0;
        else
            return 1;
    }

    if(tree[node].prop!=0)
        update_lazy(node,b,e);

    ll mid = (b+e)/2;

    return query(node*2,b,mid,i,j)+query(node*2+1,mid+1,e,i,j);

}


int main()
{

    ll test,N,left[100005],right[100005];

    scanf("%lld",&test);

    for(int ii=1; ii<=test; ii++)
    {

        memset(tree,0,sizeof tree);

        scanf("%lld",&N);

        ll maxi=0;//highest index of segment tree

        for(int i=1; i<=N; i++)
        {
            scanf("%lld %lld",&left[i],&right[i]);
            if(right[i]>maxi)
                maxi = right[i];
        }

        ll cont=0;

        for(int i=N; i>=1; i--)
        {
            if(query(1,1,maxi,left[i],right[i]))
                cont++;
            update(1,1,maxi,left[i],right[i]);

        }

        printf("%lld\n",cont);

    }

    return 0;

}
