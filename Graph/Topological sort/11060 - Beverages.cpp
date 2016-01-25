#include<bits/stdc++.h>

using namespace std;

vector<int>v[105];
vector<int>topsort;
map<int,int>indegree;
map<int,int>visited;

int main()
{
    int x,y,N,m,indx,cases=1;

    string s,s1,s2;

    map<string,int>map1;
    map<int,string>map2;

    while(scanf("%d",&N)==1)
    {
        indx=0;

        for(int i=0; i<=N; i++)
            v[i].clear();

        //memset(indegree,0,sizeof(indegree));
        //memset(visited,0,sizeof(visited));

        for(int i=0; i<N; i++)
        {
            cin>>s;
            map1[s] = ++indx;
            map2[indx] = s;
        }

        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>s1>>s2;
            v[map1[s1]].push_back(map1[s2]);
            indegree[map1[s2]]++;
        }

        for(int i=1; i<=N; i++)
        {
            if(indegree[i]==0 && !visited[i])
            {
                topsort.push_back(i);
                for(int j=0; j<v[i].size(); j++)
                {
                    int temp = v[i][j];
                    indegree[temp]--;
                }
                visited[i]=1;
                i=0;
            }
        }

        cout<<"Case #"<<cases<<": Dilbert should drink beverages in this order: ";
        int i;
        for(i=0; i<topsort.size()-1; i++)
            cout<<map2[topsort[i]]<<" ";
        cout<<map2[topsort[i]]<<"."<<endl<<endl;
        cases++;

        indegree.clear();
        visited.clear();
        topsort.clear();
    }
    return 0;
}
