#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<vector>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<set>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<sstream>
#include<utility>
#include<complex>
#include<cstring>

using namespace std;

int main()
{
    string s[101],t;
    int i=0,j,k,m=0,len;
    while(getline(cin,s[i++]))
    {
        len=s[i-1].size();
        if(len>m)
        {
            m=len;
        }
    }
    cin.clear();
    for(j=0;j<m;j++)
    {
        for(k=i-2;k>=0;k--)
        {
            t=s[k];
            len=t.size();
            if(j<len)
                cout<<t[j];
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
