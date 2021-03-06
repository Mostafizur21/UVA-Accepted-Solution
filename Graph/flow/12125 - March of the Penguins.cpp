//  Mafi, KUET 2K11

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

#define sc1(n) scanf("%d",&n)
#define sc2(a,b) scanf("%d %d",&a,&b)
#define sc3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sl1(n) scanf("%lld",&n)
#define sl2(a,b) scanf("%lld %lld",&a,&b)
#define sl3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define mem(v,val) memset(v,val,sizeof v)
#define sz(v) v.size()
#define REVERSE(v) reverse(v.begin(),v.end())
#define SORT(v) sort(v.begin(),v.end())
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define pp pair<int,int>
#define pp1 pair<int,pair<int,int> >
#define pp2 pair<pair<int,int>,int >

#define rep(i,n) for(i=1;i<=n;i++)
#define Rep(i,n) for(i=0;i<n;i++)
#define For(i,a,b) for(i=a;i<=b;i++)

#define INF INT_MAX
#define MAXN 100006
#define modu 1000003
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define read() freopen("input.txt","r",stdin);
#define write() freopen("output.txt","w",stdout);

const double pi=acos(-1.0);

//int row[]={1,0,-1,0};int col[]={0,1,0,-1}; //4 Direction
//int row[]={1,1,0,-1,-1,-1,0,1};int col[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int row[]={2,1,-1,-2,-2,-1,1,2};int col[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

ll leap(ll x)
{
    if((x%4==0&&x%100!=0)||x%400==0) return 1;
    return 0;
}

ll nCr(ll n, ll r)
{
    if(r==0) return 1;
    else return nCr(n-1,r-1)*n/r;
}

ll mod(ll N,ll M)//N%M
{
    ll temp = N/M;
    N-=temp*M;
    return N;
}

ll bigmod(ll N,ll M,ll MOD) //(N^M)%MOD
{
    if(M==0) return 1;
    if((M/2)*2==M)
    {
        ll ret = bigmod(N,M/2,MOD);
        return ((ret%MOD)*(ret%MOD))%MOD;
    }
    else return ((N%MOD)*bigmod(N,M-1,MOD)%MOD)%MOD;
}

ll modinverse(ll a,ll m)  //a*x=1(mod m)
{
    return bigmod(a,m-2,m);
}

struct Euclid
{
    ll x,y,d;
    Euclid() {};
    Euclid(ll xx,ll yy,ll dd)
    {
        x = xx, y = yy, d = dd;
    }
};

Euclid Extended_gcd(ll a, ll b)// input a,b Output x,y,d;ax+by = d,d=gcd(a,b)
{
    if(!b)
        return Euclid(1,0,a);
    Euclid e = Extended_gcd(b,a%b);
    return Euclid(e.y,e.x-a/b*e.y,e.d);
}

#define count_bit(x)    __builtin_popcountll(x) //number of 1 in binary of x; __builtin_popcount=int,__builtin_popcountl=long int,__builtin_popcountll=long long int
ll Set(ll N,ll pos)
{
    return N|(1LL<<pos);
}
ll reset(ll N,ll pos)
{
    return N&~(1LL<<pos);
}
ll check(ll N,ll pos)
{
    return (N&(1LL<<pos));
}

int edges;
int last[205],prev[20001],head[20001],cap[20001],flow[20001],dist[205];
int nextedge[205]; //used for keeping track of next edge of ith node

void addedge(int u,int v,int Cap,int Flow)
{
    head[edges] = v,prev[edges] = last[u],cap[edges]=Cap,flow[edges]=Flow,last[u] = edges++;

}

bool dinicBFS(int source,int sink,int n)
{
    int from = source,to,Cap,Flow;
    mem(dist,0);
    dist[from]=1;
    queue<int>q;
    q.push(from);

    while(!q.empty())
    {
        from = q.front();
        q.pop();
        for(int e = last[from]; e>=0; e = prev[e])
        {
            to = head[e],Cap = cap[e],Flow = flow[e];
            if(!dist[to]&&Cap>Flow)
            {
                dist[to] = dist[from]+1;
                q.push(to);
            }
        }
    }

    return (dist[sink]!=0);
}

int dfs(int from,int minedge,int E)
{
    if(!minedge)
        return 0;
    if(from==E)
        return minedge;
    int to,e,Cap,Flow,ret;
    for(; nextedge[from]>=0; nextedge[from] = prev[e])
    {
        e = nextedge[from];

        to = head[e],Cap = cap[e],Flow = flow[e];

        if(dist[to]!=dist[from]+1)
            continue;

        ret =dfs(to,min(minedge,Cap-Flow),E);

        if(ret)
        {
            flow[e]+=ret;

            flow[e^1]-=ret;
            return ret;
        }

    }
    return 0;
}

int dinicupdate(int source,int sink)
{
    int Flow=0;
    while(1)
    {
        int minedge = dfs(source,1,sink);

        if(!minedge)
            break;
        Flow+=minedge;

    }
    return Flow;
}

int maxflow(int source,int sink,int n)
{
    int totflow=0;
    while(dinicBFS(source,sink,n))
    {
        for(int i=0; i<=n; i++)
        {
            nextedge[i] = last[i];
        }
        totflow+=dinicupdate(source,sink);
    }
    return totflow;
}

int main()
{
    int N,source,sink,i,x,test;
    double Dist;
    vector<int>v[101],res;
    sc1(test);
    while(test--)
    {
        sc1(N);
        cin>>Dist;
        for(int i=0; i<=N; i++)
            v[i].clear();
        res.clear();
        for(int i=0; i<N; i++)
        {
            for(int j=1; j<=4; j++)
            {
                sc1(x);
                v[i].pb(x);
            }
        }
        for(int i=0; i<N; i++)
        {
            edges=0;
            mem(last,-1);
            for(int j=0; j<N; j++)
            {
                if(i==j)
                {
                    addedge(2*j,2*j+1,9999999,0);
                    addedge(2*j+1,2*j,9999999,0);
                }
                else
                {
                    addedge(2*j,2*j+1,v[j][3],0);
                    addedge(2*j+1,2*j,0,0);
                }
            }
            source=2*N;
            sink =2*i+1;

            int tot=0;
            for(int j=0; j<N; j++)
            {
                if(i==j)
                    continue;
                addedge(source,2*j,v[j][2],0);
                addedge(2*j,source,0,0);
                tot+=v[j][2];
            }

            for(int p=0; p<N; p++)
            {
                for(int q=p+1; q<N; q++)
                {
                    double temp = (double)sqrt(((v[p][0]-v[q][0])*(v[p][0]-v[q][0]))+((v[p][1]-v[q][1])*(v[p][1]-v[q][1])));
                    if(temp<=Dist)
                    {
                        if(p==i)
                        {
                            addedge(2*q+1,2*p,9999999,0);
                            addedge(2*p,2*q+1,0,0);
                        }
                        else if(q==i)
                        {
                            addedge(2*p+1,2*q,9999999,0);
                            addedge(2*q,2*p+1,0,0);
                        }
                        else
                        {
                            addedge(2*p+1,2*q,9999999,0);
                            addedge(2*q,2*p+1,0,0);

                            addedge(2*q+1,2*p,9999999,0);
                            addedge(2*p,2*q+1,0,0);
                        }
                    }
                }
            }
            int ffff = maxflow(source,sink,2*N+1);
            if(ffff>=tot)
                res.pb(i);
        }
        if(res.size()==0)
            printf("-1\n");
        else
        {
            printf("%d",res[0]);
            for(int i=1; i<res.size(); i++)
                printf(" %d",res[i]);
            printf("\n");
        }
    }
    return 0;
}
