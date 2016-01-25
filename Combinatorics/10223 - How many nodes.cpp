#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<long,int>mp;

    mp[1] = 1;

    mp[2] = 2;

    mp[5] = 3;

    mp[14] = 4;

    mp[42] = 5;

    mp[132] = 6;

    mp[429] = 7;

    mp[1430] = 8;

    mp[4862] = 9;

    mp[16796] = 10;

    mp[58786] = 11;

    mp[208012] = 12;

    mp[742900] = 13;

    mp[2674440] = 14;

    mp[9694845] = 15;

    mp[35357670] = 16;

    mp[129644790] = 17;

    mp[477638700] = 18;

    mp[1767263190] = 19;

    long input;

    while(cin>>input)
    {
        cout<<mp[input]<<endl;
    }

    return 0;
}
