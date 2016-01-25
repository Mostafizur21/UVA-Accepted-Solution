#include<bits/stdc++.h>
#define mx 250001
#define ll long long
#define INF 10000000005

using namespace std;


/*
Ordering is very very essential in segment tree.Withour concern this u will must see WA
*/


struct info
{
    ll sum,A,B,start,End,start1,End1,prop;
} tree[mx*3];

void update_lazy(ll node,ll st,ll ed,ll val)
{
    ll mid = (st+ed)/2;

    if(val==1)
    {
        // set the start and end value
        tree[2*node].start+= tree[node].start;
        tree[2*node].End+=(tree[node].start+ tree[node].A*(mid-st));
        tree[2*node+1].start+=(tree[node].start+ tree[node].A*(mid-st+1));
        tree[2*node+1].End+= tree[node].End;

        ll temp1 = ((mid-st+1)*(2*tree[node].start+(mid-st)*tree[node].A))/2;//series summation

        tree[2*node].sum+= temp1;

        temp1 = ((ed-mid)*(2*(tree[node].start+ tree[node].A*(mid-st+1))+(ed-mid-1)*tree[node].A))/2;//series summation

        tree[2*node+1].sum+= temp1;

        tree[2*node].A+=tree[node].A;
        tree[2*node+1].A+=tree[node].A;

        // reset the value of node
        tree[node].start= 0;
        tree[node].End= 0;
        tree[node].A=0;
    }
    else if(val==2)
    {

        tree[2*node].start1+= tree[node].start1;
        tree[2*node].End1+=(tree[node].start1-tree[node].B*(mid-st));
        tree[2*node+1].start1+=(tree[node].start1-tree[node].B*(mid-st+1));
        tree[2*node+1].End1+= tree[node].End1;

        ll temp1 = ((mid-st+1)*(2*(tree[node].start1-tree[node].B*(mid-st))+(mid-st)*tree[node].B))/2;

        tree[2*node].sum+= temp1;

        temp1 = ((ed-mid)*(2*tree[node].End1+(ed-mid-1)*tree[node].B))/2;

        tree[2*node+1].sum+= temp1;

        tree[2*node].B+=tree[node].B;
        tree[2*node+1].B+=tree[node].B;

        tree[node].start1= 0;
        tree[node].End1= 0;
        tree[node].B=0;
    }
    else
    {
        tree[2*node].prop=tree[node].prop;
        tree[2*node+1].prop=tree[node].prop;

        tree[2*node].sum=(mid-st+1)*tree[node].prop;
        tree[2*node+1].sum=(ed-mid)*tree[node].prop;

        tree[node].prop=-INF;

        // need to reset all the value as this type of query will replace the value
        tree[2*node].A=0;
        tree[2*node].B=0;
        tree[2*node].start=0;
        tree[2*node].End=0;
        tree[2*node].start1=0;
        tree[2*node].End1=0;

        tree[2*node+1].A=0;
        tree[2*node+1].B=0;
        tree[2*node+1].start=0;
        tree[2*node+1].End=0;
        tree[2*node+1].start1=0;
        tree[2*node+1].End1=0;
    }

}

void update(ll node,ll st,ll ed,ll i,ll j,ll val,ll check)
{

    if(i>ed||j<st) return;

    if(st>=i&&ed<=j)
    {
        if(check==1)
        {
            ll x = st-i+1;
            ll y = ed-i+1;
            tree[node].A++;
            tree[node].start+=x;
            tree[node].End+= y;
            ll temp1 = (y*(y+1))/2;
            ll temp2 = (x*(x-1))/2;
            tree[node].sum+= temp1-temp2;
        }
        else if(check==2)
        {
            ll x = j-st+1;
            ll y = j-ed+1;
            tree[node].start1+= x;
            tree[node].End1+=y;
            tree[node].B++;
            ll temp1 = (x*(x+1))/2;
            ll temp2 = (y*(y-1))/2;
            tree[node].sum+= temp1-temp2;
        }
        else
        {
            tree[node].prop=val;
            tree[node].sum=(ed-st+1)*val;
            tree[node].A=0;
            tree[node].B=0;
            tree[node].start=0;
            tree[node].End=0;
            tree[node].start1=0;
            tree[node].End1=0;
        }
        return;
    }
//order is the fact, as this type of query replace the value so first push down this value
    if(tree[node].prop!=-INF)
        update_lazy(node,st,ed,3);

    if(tree[node].A!=0)
        update_lazy(node,st,ed,1);

    if(tree[node].B!=0)
        update_lazy(node,st,ed,2);

    ll mid = (st+ed)/2;

    update(2*node,st,mid,i,j,val,check);

    update(2*node+1,mid+1,ed,i,j,val,check);

    tree[node].sum = tree[2*node].sum+tree[2*node+1].sum;

}

ll query(ll node,ll st,ll ed,ll i,ll j)
{
    if(i>ed||j<st) return 0;

    if(st>=i&&ed<=j)
        return tree[node].sum;

    ll mid = (st+ed)/2;

    //order is the fact, as this type of query replace the value so first push down this value
    if(tree[node].prop!=-INF)
        update_lazy(node,st,ed,3);

    if(tree[node].A!=0)
        update_lazy(node,st,ed,1);

    if(tree[node].B!=0)
        update_lazy(node,st,ed,2);

    return query(node*2,st,mid,i,j)+query(node*2+1,mid+1,ed,i,j);
}

int main()
{
    ll N=250000,q,i,j,val;

    for(int a=0; a<=3*N; a++)
    {
        tree[a].A=0;
        tree[a].B=0;
        tree[a].start=0;
        tree[a].End=0;
        tree[a].start1=0;
        tree[a].End1=0;
        tree[a].sum=0;
        tree[a].prop=-INF;
    }

    scanf("%lld",&q);

    char ch[2];

    while(q--)
    {
        scanf("%s",ch);

        scanf("%lld %lld",&i,&j);

        val=0;//val will 0 for A and B and for C user input

        if(ch[0]=='C')
            scanf("%lld",&val);

        if(ch[0]!='S')
            update(1,1,N,i,j,val,ch[0]-'A'+1);// 1 for A,2 for B, 3 for C

        else
            printf("%lld\n",query(1,1,N,i,j));
    }

    return 0;
}

