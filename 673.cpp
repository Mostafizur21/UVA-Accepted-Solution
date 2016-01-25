#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    char ch[130],c[130]={0};
    int i,j,m,n,test;
    scanf("%d",&test);
        getchar();
        for(j=1;j<=test;j++)
        {
            gets(ch);
            m=0;
            n=0;
            for(i=0;ch[i]!='\0';i++)
            {
                if(ch[i]=='('||ch[i]=='[')
                    c[m++]=ch[i];
                if(ch[i]==')'||ch[i]==']')
                {
                    if((c[m-1]=='('&&ch[i]==')')||(c[m-1]=='['&&ch[i]==']'))
                        m=m-1;
                    else
                    {
                        n=1;
                        break;
                    }
                }
            }
            if(n==0&&m==0)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    return 0;
}
