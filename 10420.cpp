#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<list>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>

using namespace std;

int main()
{
    string name[2005],s;
    char ch[80],c[80];
    int n,i,j,k=1,m=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(ch);
        for(j=0;ch[j]!='\0';j++)
        {
            if(ch[j]==' ')
            {
                c[j] = '\0';
                break;
            }
            c[j]=ch[j];
        }
        name[i]=c;
    }

    for(j = 0;j<n;j++)
    for(i=0;i<n;i++)
    {
        if(name[j]<name[i])
        {
            string temp = name[j];
            name[j] = name[i];
            name[i] = temp;
        }
    }
    s = name[0];
    for(i = 1;i<n;i++)
    {
        if(name[i]==s)
            k++;
        else
        {
            cout<<s<<" "<<k<<endl;
            s = name[i];
            k = 1;
        }
    }
    cout<<s<<" "<<k<<endl;
    return 0;
}

