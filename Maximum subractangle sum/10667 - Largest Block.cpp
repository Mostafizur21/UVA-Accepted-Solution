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
#define all(v) v.begin(),v.end()
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

#define mx 102

int main()
{
    int grid[mx][mx],row_sum[mx],mx_sum,column,row,n,i,j,t,test,block,r1,r2,c1,c2;
    sc1(test);
    rep(t,test)
    {
        sc1(n);
        rep(i,n)
        {
            rep(j,n)
            grid[i][j]=1;
        }
        sc1(block);
        while(block--)
        {
            sc2(r1,c1);
            sc2(r2,c2);
            for(int i=r1; i<=r2; i++)
            {
                for(int j=c1; j<=c2; j++)
                    grid[i][j]=-10000;
            }
        }
        column=row=n;
        mx_sum=0;

        for(int left_column=1; left_column<=column; left_column++)
        {

            for(int i=1; i<=row; i++)
                row_sum[i]=0;

            for(int right_column=left_column; right_column<=column; right_column++)
            {

                for(int i=1; i<=row; i++)
                    row_sum[i]+=grid[i][right_column];

                int sum=0;

                for(int i=1; i<=row; i++)
                {
                    sum+=row_sum[i];
                    if(sum>mx_sum)
                        mx_sum=sum;
                    if(sum<0)
                        sum=0;
                }
            }
        }
        printf("%d\n",mx_sum);
    }
    return 0;
}


