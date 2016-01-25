#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    char input1[1000000],input2[100000],not_space[100000];
    int test,i,j,k,m,n,p;
    while(scanf("%d",&test)!=EOF)
    {
        getchar();
        for(i=1;i<=test;i++)
        {
            k=0;
            m=0;
            gets(input1);
            gets(input2);
            for(j=0;input1[j]!='\0';j++)
            {
                if(input1[j]==' ')
                   {
                       m=1;
                        continue;
                   }
                else
                    not_space[k++]=input1[j];
            }
            not_space[k]='\0';
            if(m==0)
            {
                n=strcmp(input1,input2);
                if(n==0)
                    cout<<"Case "<<i<<": Yes\n";
                else
                    cout<<"Case "<<i<<": Wrong Answer\n";
            }
            if(m==1)
            {
                p=strcmp(not_space,input2);
                if(p==0)
                    cout<<"Case "<<i<<": Output Format Error\n";
                    else
                        cout<<"Case "<<i<<": Wrong Answer\n";
            }
        }
    }
    return 0;
}
