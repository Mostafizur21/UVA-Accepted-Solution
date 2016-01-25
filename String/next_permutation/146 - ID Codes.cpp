#include <bits/stdc++.h>

using namespace std;

vector<char>v;

void print()
{
    for(int a=0; a<v.size(); a++)
        cout<<v[a];

    cout<<endl;

}

int main()
{
    string s;

    while(cin>>s)
    {
        if(s=="#")
            break;

        v.clear();

        int len = s.size();

        for(int i=0; i<len; i++)
        {
            v.push_back(s[i]);
        }

        int check=0;

        while(next_permutation(v.begin(),v.end()))
        {
            check++;

            print();

            break;
        }

        if(!check)
            cout<<"No Successor"<<endl;
    }
    return 0;
}
