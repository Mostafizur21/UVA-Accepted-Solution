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

using namespace std;

int main()
{
    int test,instruction,position,i,j,k,m,n,len;
    string s[101],t,r;
    char c[4];
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        position=0;
        scanf("%d",&instruction);
        getchar();
        for(j=0;j<instruction;j++)
        {

            getline(cin,s[j]);
            //cout<<s[j]<<endl;
            m=0;
            len=s[j].size();
            if(len==4)
                position--;
            else if(len==5)
                position++;
            else
            {
                r=s[j];
                for(k=8;k<len;k++)
                    c[m++]=r[k];
                c[m]='\0';
                n=atoi(c);
                t=s[n-1];
                s[j]=s[n-1];
                len=t.size();
                if(len==4)
                    position--;
                if(len==5)
                    position++;
            }
        }
        printf("%d\n",position);
    }
    return 0;
}
