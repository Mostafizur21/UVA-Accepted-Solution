#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,i,j,m;

    vector<int>v;

    while(cin>>N && N)
    {
        while(cin>>m && m)
        {
            v.clear();

            v.push_back(m);

            for(i=2; i<=N; i++)
            {
                cin>>m;

                v.push_back(m);

            }

            j=1;

            stack<int>st;

            for(i=0; i<v.size(); i++)
            {
                for(j=j; j<=v[i]; j++)
                    st.push(j);

                if(v[i]==st.top())
                    st.pop();
            }

            if(st.empty())
                cout<<"Yes"<<endl;

            else
                cout<<"No"<<endl;
        }

        cout<<endl;
    }

    return 0;
}
