#include<bits/stdc++.h>

using namespace std;

long gcd (long a,long b,long & x,long & y)
{
    if(a<b)
        return gcd(b,a,y,x);

    if (b == 0)
    {
        x = 1;

        y = 0;

        return a;
    }

    long x1, y1;

    long d = gcd (b, a%b, x1, y1);

    x = y1;

    y = (x1-a/b*y1);

    return d;

}


int main()
{
    long A,B,X,Y,D;

    while(cin>>A>>B)
    {
        D = gcd(A,B,X,Y);

        cout<<X<<" "<<Y<<" "<<D<<endl;
    }

    return 0;
}
