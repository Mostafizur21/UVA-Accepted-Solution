#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    long long int input;
    while(cin>>input)
    {
        if(input<0&&input%2==0)
            cout<<"Underflow!\n";
        else if(input<0&&input%2!=0)
            cout<<"Overflow!\n";
        else if(input>=0&&input<=7)
            cout<<"Underflow!\n";
        else if(input>13)
            cout<<"Overflow!\n";
        else if(input==8)
            cout<<"40320\n";
        else if(input==9)
            cout<<"362880\n";
        else if(input==10)
            cout<<"3628800\n";
        else if(input==11)
            cout<<"39916800\n";
        else if(input==12)
            cout<<"479001600\n";
        else if(input==13)
            cout<<"6227020800\n";
    }
    return 0;
}

