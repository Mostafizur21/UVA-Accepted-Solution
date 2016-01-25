#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,a,b,c;

    while(cin>>n)
    {
        a = b = c = 0;

        priority_queue<int>pq;

        stack<int>s;

        queue<int>q;

        for(int i = 1; i<=n; i++)
        {

            cin>>x>>y;

            if(x==1)
            {
                s.push(y);

                q.push(y);

                pq.push(y);
            }

            else
            {
                if(s.size()>0)
                {
                    if(s.top()!=y)
                        a=1;

                    s.pop();
                }

                else
                    a = 1;

                if(q.size()>0)
                {
                    if(q.front()!=y)
                        b=1;

                    q.pop();
                }

                else
                    b = 1;

                if(pq.size()>0)
                {
                    if(pq.top()!=y)
                        c=1;

                    pq.pop();
                }
                else
                    c = 1;
            }

        }

        if(a==1&&b==1&&c==1)
            cout<<"impossible"<<endl;

        else if(a==0&&b==1&&c==1)
            cout<<"stack"<<endl;

        else if(a==1&&b==0&&c==1)
            cout<<"queue"<<endl;

        else if(a==1&&b==1&&c==0)
            cout<<"priority queue"<<endl;

        else if(a+b+c<2)
            cout<<"not sure"<<endl;

    }

    return 0;
}
