#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>mp;

    vector<int>order;


    int m;

    while(cin>>m)
    {
        if(!mp[m])
            order.push_back(m);
        mp[m]++;
    }

    for(int i = 0; i<order.size(); i++)
    {
        cout<<order[i]<<" "<<mp[order[i]]<<endl;
    }

    return 0;
}
