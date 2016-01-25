#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector<ll>v1,v2;

ll arr[41],mid,n;

void makequery(ll pos,ll sum,ll taken)
{

    if(pos>mid)
    {
        if(taken)
            v1.push_back(sum);

        return;
    }

    makequery(pos+1,sum+arr[pos],taken+1);

    makequery(pos+1,sum,taken);

}


void makequery1(ll pos,ll sum,ll taken)
{

    if(pos>n)
    {
        if(taken)
            v2.push_back(sum);

        return;
    }

    makequery1(pos+1,sum+arr[pos],taken+1);

    makequery1(pos+1,sum,taken);

}


int main()
{

    ll weight,total;

    while(scanf("%lld %lld",&n,&weight)!=EOF)
    {
        for(int i= 1; i<=n; i++)
            scanf("%lld",&arr[i]);

        v1.clear();

        v2.clear();

        total=0;

        mid = n/2;

        makequery(1,0,0);

        makequery1(mid+1,0,0);

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());


        ll len1=v1.size();

        ll len2 = v2.size();


        ll low=0,high=len1-1,mid;

        while(low<high)
        {
            mid=low+(high-low)/2;

            if(v1[mid]<weight)
                low=mid+1;

            else
                high=mid;
        }

        while(low<len1&&v1[low++]==weight)
            total++;

        low=0,high=len2-1,mid;

        while(low<high)
        {
            mid=low+(high-low)/2;

            if(v2[mid]<weight)
                low=mid+1;

            else
                high=mid;
        }

        while(low<len2&&v2[low++]==weight)
            total++;


        for(int i=0; i<len1; i++)
        {
            ll m = weight-v1[i];

            low=0,high=len2-1,mid;

            while(low<high)
            {
                mid=low+(high-low)/2;

                if(v2[mid]<m)
                    low=mid+1;

                else
                    high=mid;
            }

            while(low<len2&&v2[low++]==m)
                total++;

        }


        printf("%lld\n",total);

    }

    return 0;

}
/*
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>v1,v2;
ll arr[41],mid,n;
void makequery(ll pos,ll sum,ll taken)
{
    if(pos>mid)
    {
        if(taken) v1.push_back(sum);
        return;
    }
    makequery(pos+1,sum+arr[pos],taken+1);
    makequery(pos+1,sum,taken);
}
void makequery1(ll pos,ll sum,ll taken)
{
    if(pos>n)
    {
        if(taken) v2.push_back(sum);
        return;
    }
    makequery1(pos+1,sum+arr[pos],taken+1);
    makequery1(pos+1,sum,taken);
}
int main()
{
    ll weight,total;
    while(scanf("%lld %lld",&n,&weight)!=EOF)
    {
        for(int i= 1; i<=n; i++)
            scanf("%lld",&arr[i]);
        v1.clear();
        v2.clear();
        mid = n/2;
        makequery(1,0,0);
        makequery1(mid+1,0,0);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        ll len1=v1.size();
        ll len2 = v2.size();
        total=(upper_bound(v1.begin(),v1.end(),weight)-v1.begin())-(lower_bound(v1.begin(),v1.end(),weight)-v1.begin());
        total+=(upper_bound(v2.begin(),v2.end(),weight)-v2.begin())-(lower_bound(v2.begin(),v2.end(),weight)-v2.begin());
        for(int i=0; i<len1; i++)
            total+=(upper_bound(v2.begin(),v2.end(),weight-v1[i])-v2.begin())-(lower_bound(v2.begin(),v2.end(),weight-v1[i])-v2.begin());
        printf("%lld\n",total);
    }
    return 0;
}
*/
