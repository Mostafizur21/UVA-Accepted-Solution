#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    string s,t;
    int i,j,k,m;
    while(cin>>s>>t)
    {
        k=m=0;
        for(i=0;i<s.size();i++)
        {
            for(j=k;j<t.size();j++)
            {
                if(s[i]==t[j])
                {
                    k=j+1;
                    m++;
                    break;
                }
            }
        }
        if(m==i)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
