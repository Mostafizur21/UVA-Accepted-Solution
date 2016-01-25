#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int>mp;

    mp[1] = 1;

    mp[2] = 2;

    mp[3] = 5;

    mp[4] = 14;

    mp[5] = 42;

    mp[6] = 132;

    mp[7] = 429;

    mp[8] = 1430;

    mp[9] = 4862;

    mp[10] = 16796;

    int input,check=0;

    while(cin>>input)
    {
        if(check)
            cout<<endl;

        check=1;

        cout<<mp[input]<<endl;
    }

    return 0;
}
