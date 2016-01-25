#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X,Y,result,m;

    while(cin>>X>>Y)
    {
        m = Y-X;
        result =  Y/m;

        if(Y%m!=0)
            result++;
        cout<<result<<endl;
    }
    return 0;
}
