#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int test,length,width,height,j;
    while(scanf("%d",&test)!=EOF)
    {
        for(j=1;j<=test;j++)
        {
            cin>>length>>width>>height;
            if(length>20||width>20||height>20)
                cout<<"Case "<<j<<": bad\n";
            else
                cout<<"Case "<<j<<": good\n";
        }
    }
    return 0;
}
