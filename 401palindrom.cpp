#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    string ch,a,b,c,d;
    int i,j,k,m,n,len,ln;
    while(cin>>ch)
    {
        k=0;
        m=0;
        n=0;
         b=ch;
         d=ch;
         reverse(d.begin(),d.end());
         len=ch.size();
         ln=len-1;
         j=ln/2;
        for(i=0;i<=j;i++)
        {
            if((ch[i]=='E'&&ch[ln-i]=='3')||(ch[i]=='3'&&ch[ln-i]=='E')||(ch[i]=='J'&&ch[ln-i]=='L')||(ch[i]=='L'&&ch[ln-i]=='J')||(ch[i]=='S'&&ch[ln-i]=='2')||(ch[i]=='2'&&ch[ln-i]=='S')||(ch[i]=='Z'&&ch[ln-i]=='5')||(ch[i]=='5'&&ch[ln-i]=='Z'))
            {
                k=1;
                swap(ch[i],ch[ln-i]);
            }
           else if((ch[i]=='A'&&ch[ln-i]=='A')||(ch[i]=='H'&&ch[ln-i]=='H')||(ch[i]=='I'&&ch[ln-i]=='I')||(ch[i]=='M'&&ch[ln-i]=='M')||(ch[i]=='O'&&ch[ln-i]=='O')||(ch[i]=='T'&&ch[ln-i]=='T')||(ch[i]=='U'&&ch[ln-i]=='U')||(ch[i]=='V'&&ch[ln-i]=='V')||(ch[i]=='W'&&ch[ln-i]=='W')||(ch[i]=='X'&&ch[ln-i]=='X')||(ch[i]=='Y'&&ch[ln-i]=='Y')||(ch[i]=='1'&&ch[ln-i]=='1')||(ch[i]=='8'&&ch[ln-i]=='8'))
                k=1;
            else
             {
                   k=0;
                  break;
             }
        }
        if(k==1)
            reverse(ch.begin(),ch.end());
        if(k==0)
        {
            if(b!=d)
                cout<<b<<" -- is not a palindrome.\n";
           else if(b==d)
                cout<<b<<" -- is a regular palindrome.\n";
        }
        if(k==1)
        {
            if(b!=d&&b==ch)
                 cout<<b<<" -- is a mirrored string.\n";
            else if(b==d&&b==ch)
                 cout<<b<<" -- is a mirrored palindrome.\n";
        }
        cout<<endl;
    }
    return 0;
}
