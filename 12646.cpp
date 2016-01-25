#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if((a==b)&&(b==c))
            cout<<"*\n";
        else if(a==b&&a!=c)
            cout<<"C\n";
        else if(a==c&&a!=b)
            cout<<"B\n";
        else
            cout<<"A\n";
    }
    return 0;
}
