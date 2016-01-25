#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int test,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A,B,C,arr[30],D,E,F,G;
    string input;
    char ch[30];
    scanf("%d",&test);
    a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z=B=C=0;
    getchar();
    for(F=1;F<=test;F++)
    {
        getline(cin,input);
        for(A=0;A<input.size();A++)
        {
            if(input[A]=='a'||input[A]=='A') a++;
            if(input[A]=='b'||input[A]=='B') b++;
            if(input[A]=='c'||input[A]=='C') c++;
            if(input[A]=='d'||input[A]=='D') d++;
            if(input[A]=='e'||input[A]=='E') e++;
            if(input[A]=='f'||input[A]=='F') f++;
            if(input[A]=='g'||input[A]=='G') g++;
            if(input[A]=='h'||input[A]=='H') h++;
            if(input[A]=='i'||input[A]=='I') i++;
            if(input[A]=='j'||input[A]=='J') j++;
            if(input[A]=='k'||input[A]=='K') k++;
            if(input[A]=='l'||input[A]=='L') l++;
            if(input[A]=='m'||input[A]=='M') m++;
            if(input[A]=='n'||input[A]=='N') n++;
            if(input[A]=='o'||input[A]=='O') o++;
            if(input[A]=='p'||input[A]=='P') p++;
            if(input[A]=='q'||input[A]=='Q') q++;
            if(input[A]=='r'||input[A]=='R') r++;
            if(input[A]=='s'||input[A]=='S') s++;
            if(input[A]=='t'||input[A]=='T') t++;
            if(input[A]=='u'||input[A]=='U') u++;
            if(input[A]=='v'||input[A]=='V') v++;
            if(input[A]=='w'||input[A]=='W') w++;
            if(input[A]=='x'||input[A]=='X') x++;
            if(input[A]=='y'||input[A]=='Y') y++;
            if(input[A]=='z'||input[A]=='Z') z++;
        }
    }
            if(a!=0)
        {
            arr[B++]=a;
            ch[C++]='A';
        }
        if(b!=0)
        {
            arr[B++]=b;
            ch[C++]='B';
        }
        if(c!=0)
        {
            arr[B++]=c;
            ch[C++]='C';
        }
        if(d!=0)
        {
            arr[B++]=d;
            ch[C++]='D';
        }
        if(e!=0)
        {
            arr[B++]=e;
            ch[C++]='E';
        }
        if(f!=0)
        {
            arr[B++]=f;
            ch[C++]='F';
        }
        if(g!=0)
        {
            arr[B++]=g;
            ch[C++]='G';
        }
        if(h!=0)
        {
            arr[B++]=h;
            ch[C++]='H';
        }
        if(i!=0)
        {
            arr[B++]=i;
            ch[C++]='I';
        }
        if(j!=0)
        {
            arr[B++]=j;
            ch[C++]='J';
        }
        if(k!=0)
        {
            arr[B++]=k;
            ch[C++]='K';
        }
        if(l!=0)
        {
            arr[B++]=l;
            ch[C++]='L';
        }
        if(m!=0)
        {
            arr[B++]=m;
            ch[C++]='M';
        }
        if(n!=0)
        {
            arr[B++]=n;
            ch[C++]='N';
        }
        if(o!=0)
        {
            arr[B++]=o;
            ch[C++]='O';
        }
        if(p!=0)
        {
            arr[B++]=p;
            ch[C++]='P';
        }
        if(q!=0)
        {
            arr[B++]=q;
            ch[C++]='Q';
        }
        if(r!=0)
        {
            arr[B++]=r;
            ch[C++]='R';
        }
        if(s!=0)
        {
            arr[B++]=s;
            ch[C++]='S';
        }
        if(t!=0)
        {
            arr[B++]=t;
            ch[C++]='T';
        }
        if(u!=0)
        {
            arr[B++]=u;
            ch[C++]='U';
        }
        if(v!=0)
        {
            arr[B++]=v;
            ch[C++]='V';
        }
        if(w!=0)
        {
            arr[B++]=w;
            ch[C++]='W';
        }
        if(x!=0)
        {
            arr[B++]=x;
            ch[C++]='X';
        }
        if(y!=0)
        {
            arr[B++]=y;
            ch[C++]='Y';
        }
        if(z!=0)
        {
            arr[B++]=z;
            ch[C++]='Z';
        }
        ch[C]='\0';
        for(G=0;G<B-1;G++)
        {
            for(D=0;D<B-1;D++)
            {
                if(arr[D]<arr[D+1])
                {
                    int temp=arr[D];
                    arr[D]=arr[D+1];
                    arr[D+1]=temp;
                    char tmp=ch[D];
                    ch[D]=ch[D+1];
                    ch[D+1]=tmp;
                }
            }
        }
        for(E=0;E<B;E++)
        {
            printf("%c %d\n",ch[E],arr[E]);
        }
    return 0;
}
