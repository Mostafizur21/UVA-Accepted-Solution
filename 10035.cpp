
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i,j,k,m,n,p,q;
    while(scanf("%d %d",&m,&n)!=EOF){
    p=0;
    q=0;
    if(m==0&&n==0)
        break;
    while(m>=1||n>=1)
    {
       i=m%10;
       m=m/10;
       j=n%10;
       n=n/10;
       k=q+i+j;
       if(k>=10)
        {
            p++;
            q=1;
        }
        else
            q=0;
    }
    if(p==0)
        cout<<"No carry operation.\n";
    else if(p==1)
        cout<<p<<" carry operation.\n";
    else
        cout<<p<<" carry operations.\n";}
    return 0;
}
