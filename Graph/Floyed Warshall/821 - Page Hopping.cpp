#include <bits/stdc++.h>

using namespace std;

int dist[101][101];

int test=1,m=101,n=0;

set<int>s;

void intial()
{

    for(int i=1; i<=100; i++)
        for(int j=1; j<=100; j++)
        {
            if(i==j)
                dist[i][j]=0;
            else
                dist[i][j]=100000;
        }
}

void floyed_warshall()
{

    for(int k=m; k<=n; k++)
        for(int i=m; i<=n; i++)
            for(int j=m; j<=n; j++)
                if(dist[i][j]>(dist[i][k]+dist[k][j]))
                    dist[i][j] = dist[i][k]+dist[k][j];
}

void distance()
{
    int totalcost=0;

    for(int i=m; i<=n; i++)
        for(int j=m; j<=n; j++)
            if(dist[i][j]!=100000)
                totalcost+=dist[i][j];

    int m = s.size();

    int n = m*(m-1);

    float result = (float)totalcost/n;

    printf("Case %d: average length between pages = %.3lf clicks\n",test++,result);
}

int main()
{

    int source,dest;

    intial();

    while(cin>>source>>dest)
    {
        if(source==0&&dest==0)
        {
            floyed_warshall();

            distance();

            intial();

            s.clear();

            cin>>source>>dest;

            if(source==0&&dest==0)
                break;

            if(m>source)
                m = source;

            if(n<dest)
                n = dest;

            dist[source][dest] = 1;
        }

        else
        {
            dist[source][dest] = 1;
            if(m>source)
                m = source;

            if(n<dest)
                n = dest;
        }

        s.insert(source);
        s.insert(dest);
    }

    return 0;
}
