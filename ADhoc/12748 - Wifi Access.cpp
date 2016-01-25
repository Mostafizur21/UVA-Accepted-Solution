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

    int t,n,p,x_cen[105],y_cen[105],r[105],check,x,y;

    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>n>>p;

        for(int j=0; j<n; j++)
            cin>>x_cen[j]>>y_cen[j]>>r[j];

        cout<<"Case "<<i<<":"<<endl;

        for(int j=1; j<=p; j++)
        {
            cin>>x>>y;
            check = 0;
            for(int k=0; k<n; k++)
            {
                if(((x-x_cen[k])*(x-x_cen[k]))+((y-y_cen[k])*(y-y_cen[k]))<=(r[k]*r[k]))
                    check = 1;
            }

            if(check)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }


    return 0;
}
