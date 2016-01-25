#include<bits/stdc++.h>
#define mx 1024001
using namespace std;

string s;

struct info
{
    int one,all_one,all_zero,inverse;
} tree[mx*3];

void inverse_lazy(int node,int st,int ed)
{
    if(tree[node].all_one)
    {
        tree[node].all_one=0;
        tree[node].inverse = 0;
        tree[node].all_zero =1;
        tree[node].one = 0;
    }
    else if(tree[node].all_zero)
    {
        tree[node].all_one =1;
        tree[node].all_zero=0;
        tree[node].inverse =0;
        tree[node].one = ed-st+1;
    }
    else if(tree[node].inverse)
    {
        int temp = (ed-st+1)-tree[node].one;
        tree[node].inverse = 0;
        tree[node].all_one =0;
        tree[node].all_zero=0;
        tree[node].one =temp;
    }
    else
    {
        tree[node].inverse = 1;
        tree[node].all_one =0;
        tree[node].all_zero=0;
        tree[node].one = (ed-st+1)- tree[node].one;
    }
}

void update_lazy(int node,int st,int ed,int val)
{
    int mid = (st+ed)/2;

    if(val==1)
    {
        tree[2*node].all_one = 1;
        tree[2*node+1].all_one = 1;
        tree[2*node].all_zero = 0;
        tree[2*node+1].all_zero = 0;
        tree[2*node].inverse = 0;
        tree[2*node+1].inverse = 0;
        tree[node].all_one = 0;
        tree[2*node].one = mid-st+1;
        tree[2*node+1].one = ed-mid;
    }
    else if(val==2)
    {
        tree[2*node].all_zero = 1;
        tree[2*node+1].all_zero = 1;
        tree[2*node].all_one = 0;
        tree[2*node+1].all_one = 0;
        tree[2*node].inverse = 0;
        tree[2*node+1].inverse = 0;
        tree[node].all_zero = 0;
        tree[2*node].one = 0;
        tree[2*node+1].one = 0;
    }
    else
    {
        inverse_lazy(2*node,st,mid);
        inverse_lazy(2*node+1,mid+1,ed);
    }

}

void build_tree(int node,int b,int e)
{
    if(b==e)
    {
        if(s[b-1]=='1')
            tree[node].one = 1;
        return;
    }

    int mid = (b+e)/2;

    build_tree(2*node,b,mid);

    build_tree(2*node+1,mid+1,e);

    tree[node].one = tree[2*node].one+tree[2*node+1].one;
}

void update(int node,int st,int ed,int i,int j,int val)
{
    if(i>ed||j<st) return;

    if(st>=i&&ed<=j)
    {
        if(val==1)
        {
            tree[node].all_one = 1;
            tree[node].all_zero = 0;
            tree[node].inverse = 0;
            tree[node].one = ed-st+1;
        }
        else if(val==2)
        {
            tree[node].all_zero = 1;
            tree[node].one = 0;
            tree[node].all_one = 0;
            tree[node].inverse = 0;
        }
        else
            inverse_lazy(node,st,ed);
        return;
    }

    if(tree[node].all_one!=0)
        update_lazy(node,st,ed,1);

    if(tree[node].all_zero!=0)
        update_lazy(node,st,ed,2);

    if(tree[node].inverse!=0)
    {
        tree[node].inverse = 0;
        update_lazy(node,st,ed,3);
    }

    int mid = (st+ed)/2;

    update(2*node,st,mid,i,j,val);

    update(2*node+1,mid+1,ed,i,j,val);

    tree[node].one = tree[2*node].one+tree[2*node+1].one;

}

int query(int node,int st,int ed,int i,int j)
{
    if(i>ed||j<st) return 0;

    if(st>=i&&ed<=j)
        return tree[node].one;

    int mid = (st+ed)/2;

    if(tree[node].inverse)
    {
        tree[node].inverse=0;
        inverse_lazy(2*node,st,mid);
        inverse_lazy(2*node+1,mid+1,ed);
    }
    if(tree[node].all_one!=0)
        update_lazy(node,st,ed,1);

    if(tree[node].all_zero!=0)
        update_lazy(node,st,ed,2);

    return query(node*2,st,mid,i,j)+query(node*2+1,mid+1,ed,i,j);
}

int main()
{
    int test,T,N,n,q,i,j,v,check;

    scanf("%d",&test);

    for(int ii=1; ii<=test; ii++)
    {
        printf("Case %d:\n",ii);

        scanf("%d",&n);

        string str;
        s="";
        N=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&T);
            cin>>str;
            for(j=1; j<=T; j++)
                s+=str;
        }

        N = s.size();

        memset(tree,0,sizeof tree);

        build_tree(1,1,N);

        scanf("%d",&q);

        char ch[2];
        int z=1;

        while(q--)
        {
            scanf("%s",ch);
            scanf("%d %d",&i,&j);
            i++;
            j++;

            if(ch[0]=='F')
                update(1,1,N,i,j,1);//1 for all one

            else if(ch[0]=='E')
                update(1,1,N,i,j,2);//2 for all zero

            else if(ch[0]=='I')
                update(1,1,N,i,j,3);//3 for inverse

            else
                printf("Q%d: %d\n",z++,query(1,1,N,i,j));
        }
    }
    return 0;
}
