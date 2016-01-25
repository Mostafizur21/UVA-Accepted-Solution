//#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<set>
#include<deque>
#include<cctype>

using namespace std;

int main()
{

    int t ,n,result,i,j,check;

    string c[505];

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n;
        check = 0;
        result =0;

        for(j=1;j<=n;j++)
        {
            cin>>c[j];

//            if(c=='W')
//                check = 0;
//
//            if(c!='W')
//                check++;
//
//
//            if(check<=3)
//            result++;


        }

        for(j=1;j<=n;j++)
        {
            if(c[j]=="W")
                check = 0;

            if(c[j]!="W")
                check++;

            result++;

            if(check==3)
                break;
        }

        if(check<3)
            cout<<"Case "<<i<<": Yay! Mighty Rafa persists!"<<endl;
        else
            cout<<"Case "<<i<<": "<<result<<endl;
    }

    return 0;
}
