#include <bits/stdc++.h>
using namespace std;


struct node
{
    long long v;

    bool operator < (const node &p)const
    {
        return v>p.v;
    }
}nd;

int main()
{
    long long N,sum,i,j,m,temp;

    priority_queue<node>pq;

    while(cin>>N &&N)
    {
        sum = 0;

        for(i=1;i<=N;i++)
        {
            cin>>m;

            nd.v = m;

            pq.push(nd);

        }

        while(pq.size()>1)
        {
           i =  pq.top().v;

           pq.pop();

           j =  pq.top().v;

           pq.pop();

           temp = i+j;

           sum+=temp;

           nd.v = temp;

           pq.push(nd);
        }

        pq.pop();

        cout<<sum<<endl;

    }

    return 0;
}
