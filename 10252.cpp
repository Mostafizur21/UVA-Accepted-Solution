#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    string c;
    char a[10000],b[10000],output[100000];
    int i,j,k,m,n;
    while(gets(a))
    {
        k=0;
        gets(b);
            m=strlen(a);
            n=strlen(b);
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(b[j]==a[i])
                    {
                            output[k++]=a[i];
                            a[i]='1';
                            break;
                    }
                }
            }
        output[k]='\0';
        c=string(output);
        sort(c.begin(),c.end());
        cout<<c<<endl;
    }
    return 0;
}
