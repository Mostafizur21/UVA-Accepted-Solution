#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    char ch[100000];
    int input,test,i,j,k,m,n,arr[100000],a,b,output[100],c,p,q,r,s,t,u,v,w,x,y;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
             p=q=r=s=t=u=v=w=x=y=0;
            cin>>input;
            k=0;
            n=0;
            for(j=1;j<=input;j++)
            {
                if(j>9)
                {
                    a=j;
                    n=0;
                  while(a>=1)
                  {
                      arr[n++]=a%10;
                      a=a/10;
                  }
                  for(b=n-1;b>=0;b--)
                  {
                      ch[k++]=arr[b]+48;
                  }
                }
                else
                   ch[k++]=j+48;
            }
            ch[k]='\0';
            for(c=0;ch[c]!='\0';c++)
            {
                if(ch[c]=='0')
                    p++;
                else if(ch[c]=='1')
                    q++;
               else if(ch[c]=='2')
                    r++;
               else  if(ch[c]=='3')
                    s++;
                else if(ch[c]=='4')
                    t++;
              else if(ch[c]=='5')
                    u++;
             else if(ch[c]=='6')
                    v++;
             else if(ch[c]=='7')
                    w++;
             else if(ch[c]=='8')
                    x++;
              else if(ch[c]=='9')
                    y++;
            }
            cout<<p<<" "<<q<<" "<<r<<" "<<s<<" "<<t<<" "<<u<<" "<<v<<" "<<w<<" "<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
