#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int N,input[12],m,n,i,j,p,q,s;
    while(scanf("%d",&N)!=EOF)
    {
        cout<<"Lumberjacks:\n";
        for(i=1;i<=N;i++)
        {
            p=0;
            s=0;
            for(j=0;j<10;j++)
                cin>>input[j];
                for(int a=0;a<9;a++)
                {
                    if(input[a]<input[a+1])
                    {
                        p=1;
                    }
                    else
                    {
                        p=0;
                        break;
                    }
                }

                for(int b=0;b<9;b++)
                {
                    if(input[b]>input[b+1])
                        s=1;
                    else
                    {
                         s=0;
                        break;
                    }
                }
                  if(p==1||s==1)
                    cout<<"Ordered\n";
                  else
                    cout<<"Unordered\n";
        }
    }
    return 0;
}
