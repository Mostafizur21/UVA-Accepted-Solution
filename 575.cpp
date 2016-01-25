#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    string input;
    int len,i,j,k,m,n,result;
    while(cin>>input)
    {
        result=0;
        j=0;
        if(input=="0")
            break;
        len=input.size();
        for(i=len;i>=1;i--)
        {
            result=result+((input[j]-48)*(pow(2,i)-1));
            j++;
        }
       cout<<result<<endl;
    }
    return 0;
}
