#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<utility>
#include<complex>
#include<stack>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<deque>
#include<list>
#include<stdexcept>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<ctime>
#include<string>

using namespace std;

int main()
{
    int test,i,j,k,m,n,arr[10];
    string s1[10],s2[10];
    scanf("%d",&test);
    getchar();
    for(i=1;i<=test;i++)
    {
        m=n=0;
        for(j=0;j<10;j++)
        {
            cin>>s1[j]>>arr[j];
        }
        for(j=0;j<10;j++)
        {
            if(arr[j]==m)
            {
                s2[n++]=s1[j];
            }
            if(arr[j]>m)
            {
                n=0;
                s2[n++]=s1[j];
                m=arr[j];
            }
        }
        cout<<"Case #"<<i<<":\n";
        for(k=0;k<n;k++)
            cout<<s2[k]<<endl;
    }
    return 0;
}
