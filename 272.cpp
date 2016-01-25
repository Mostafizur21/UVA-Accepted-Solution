#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char ch[100000];
    int i,j=0,k,m;
    while(gets(ch))
    {
        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]=='"')
            {
                 j++;
              if(j%2!=0)
                 cout<<"``";
              else
                    cout<<"''";
            }
            else
                cout<<ch[i];
        }
        cout<<endl;
    }
    return 0;
}
