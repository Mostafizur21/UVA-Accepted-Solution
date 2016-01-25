#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,N,M;

    map<string,string>mp1;

    map<string,int>mp2;

    map<string,int>::iterator it;

    string name,party;

    cin>>test;

    while(test--)
    {
        cin>>N;

        getline(cin,name);

        while(N--)
        {
            getline(cin,name);

            getline(cin,party);

            mp1[name] = party;
        }

        cin>>M;

        getline(cin,name);

        while(M--)
        {
            getline(cin,name);

            if(mp1.find(name)==mp1.end());

            else

                mp2[name]++;
        }

        int len = mp2.size();

        int check=0;

        string s;

        int a=0;

        for(it=mp2.begin(); it!=mp2.end(); it++)
        {
            if(check<it->second)
            {
                check = it->second;

                s = it->first;

                a=0;
            }

            else if(check==it->second)
            {
                a=1;
            }
        }

        if(a==0&&len>0)

            cout<<mp1[s]<<endl;

        else
            cout<<"tie"<<endl;

        if(test)

            cout<<endl;

        mp1.clear();
        mp2.clear();


    }

    return 0;
}




