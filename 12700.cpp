#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    int test,n,i,j,a,b,t,w;
    char ch;
    cin>>test;

    for(i=1;i<=test;i++)
    {
        cin>>n;
            a=b=t=w=0;
        getchar();
        for(j=0;j<n;j++)
        {
            cin>>ch;
            if(ch=='T')
                t++;
            else if(ch=='A')
                a++;
            else if(ch=='B')
                b++;
            else if(ch=='W')
                w++;
        }
        if(b>0&&w==0&&b+a==n)
            cout<<"Case "<<i<<": BANGLAWASH\n";
        else if(b==0&&w>0&&w+a==n)
            cout<<"Case "<<i<<": WHITEWASH\n";
        else if(a==n)
            cout<<"Case "<<i<<": ABANDONED\n";
        else if(a!=n&&b==w)
            cout<<"Case "<<i<<": DRAW "<<w<<" "<<t<<endl;
        else if(b>w)
            cout<<"Case "<<i<<": BANGLADESH "<<b<<" - "<<w<<endl;
        else if(b<w)
            cout<<"Case "<<i<<": WWW "<<w<<" - "<<b<<endl;
    }
    return 0;
}

