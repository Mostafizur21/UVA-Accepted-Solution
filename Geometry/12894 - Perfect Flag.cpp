#include<bits/stdc++.h>

using namespace std;

int main()
{

    int T;

    double x0,y0,x1,y1,cx,cy,r,a,b,c,d;

    cin>>T;

    while(T--)
    {
        cin>>x0>>y0>>x1>>y1>>cx>>cy>>r;

        a = y1-y0;

        b = x1-x0;

        c = (y1+y0)/2.0;

        d = (9.0*(x0+x1))/20.0;

        if(3*b==5*a&&5*a==15*r&&c==cy&&d<=cx)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;

    }

    return 0;
}
