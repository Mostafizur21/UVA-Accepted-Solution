#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    char ch[21];
    int arr[27],test,R,C,M,N,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A,B,D,result,E,F,G,H,I,J;
    scanf("%d",&test);
    for(A=1;A<=test;A++)
    {
        a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z=F=I=0;
        scanf("%d%d%d%d",&R,&C,&M,&N);
        getchar();
        for(B=1;B<=R;B++)
        {
            for(D=0;D<C;D++)
            {
                cin>>ch[D];
            }
            ch[D]='\0';
            for(E=0;E<C;E++)
            {
                if(ch[E]=='A') a++;
                else if(ch[E]=='B') b++;
                else if(ch[E]=='C') c++;
                else if(ch[E]=='D') d++;
                else if(ch[E]=='E') e++;
                else if(ch[E]=='F') f++;
                else if(ch[E]=='G') g++;
                else if(ch[E]=='H') h++;
                else if(ch[E]=='I') i++;
                else if(ch[E]=='J') j++;
                else if(ch[E]=='K') k++;
                else if(ch[E]=='L') l++;
                else if(ch[E]=='M') m++;
                else if(ch[E]=='N') n++;
                else if(ch[E]=='O') o++;
                else if(ch[E]=='P') p++;
                else if(ch[E]=='Q') q++;
                else if(ch[E]=='R') r++;
                else if(ch[E]=='S') s++;
                else if(ch[E]=='T') t++;
                else if(ch[E]=='U') u++;
                else if(ch[E]=='V') v++;
                else if(ch[E]=='W') w++;
                else if(ch[E]=='X') x++;
                else if(ch[E]=='Y') y++;
                else if(ch[E]=='Z') z++;
            }
        }
        arr[F++]=a;
        arr[F++]=b;
        arr[F++]=c;
        arr[F++]=d;
        arr[F++]=e;
        arr[F++]=f;
        arr[F++]=g;
        arr[F++]=h;
        arr[F++]=i;
        arr[F++]=j;
        arr[F++]=k;
        arr[F++]=l;
        arr[F++]=m;
        arr[F++]=n;
        arr[F++]=o;
        arr[F++]=p;
        arr[F++]=q;
        arr[F++]=r;
        arr[F++]=s;
        arr[F++]=t;
        arr[F++]=u;
        arr[F++]=v;
        arr[F++]=w;
        arr[F++]=x;
        arr[F++]=y;
        arr[F++]=z;
        sort(arr,arr+F);
        H=arr[F-1];
        for(G=F-2;G>=0;G--)
        {
            if(arr[G]==H)
                I=I+arr[G];
            else
                break;
        }
        I=I+H;
        J=(R*C)-I;
        result=(I*M)+(J*N);
        printf("Case %d: %d\n",A,result);
    }
    return 0;
}
