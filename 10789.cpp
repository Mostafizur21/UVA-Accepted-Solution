#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#define MAX 2000

using namespace std;

bool  prime[MAX];

int main()
{
    int test,len,i,j,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i1,j1,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,a1,a2,a3,a4,a5,a6,a7,a8,a9,a0,b1,b2,b3;
    char ch[2001],output[2001];
    for(int i=3;i<=MAX;i+=2)
        prime[i]=true;
        prime[2]=true;
    for(int i=3;i<=sqrt(MAX);i+=2)
    {
        if(prime[i]==true)
        for(int j=i*i;j<MAX;j+=(2*i))
            prime[j]=false;
    }
   scanf("%d",&test);
    {
        getchar();
        for(b1=1;b1<=test;b1++)
        {
            A=B=C=D=E=F=G=H=I=J=K=L=M=N=O=P=Q=R=S=T=U=V=W=X=Y=Z=a=b=c=d=e=f=g=h=i1=j1=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z=a1=a2=a3=a4=a5=a6=a7=a8=a9=a0=b3=len=0;
            gets(ch);
            for(b2=0;ch[b2]!='\0';b2++)
            {
                if(ch[b2]=='A') A++;
                else if(ch[b2]=='B') B++;
                else if(ch[b2]=='C') C++;
                else if(ch[b2]=='D') D++;
                else if(ch[b2]=='E') E++;
                else if(ch[b2]=='F') F++;
                else if(ch[b2]=='G') G++;
                else if(ch[b2]=='H') H++;
                else if(ch[b2]=='I') I++;
                else if(ch[b2]=='J') J++;
                else if(ch[b2]=='K') K++;
                else if(ch[b2]=='L') L++;
                else if(ch[b2]=='M') M++;
                else if(ch[b2]=='N') N++;
                else if(ch[b2]=='O') O++;
                else if(ch[b2]=='P') P++;
                else if(ch[b2]=='Q') Q++;
                else if(ch[b2]=='R') R++;
                else if(ch[b2]=='S') S++;
                else if(ch[b2]=='T') T++;
                else if(ch[b2]=='U') U++;
                else if(ch[b2]=='V') V++;
                else if(ch[b2]=='W') W++;
                else if(ch[b2]=='X') X++;
                else if(ch[b2]=='Y') Y++;
                else if(ch[b2]=='Z') Z++;

                else if(ch[b2]=='a') a++;
                else if(ch[b2]=='b') b++;
                else if(ch[b2]=='c') c++;
                else if(ch[b2]=='d') d++;
                else if(ch[b2]=='e') e++;
                else if(ch[b2]=='f') f++;
                else if(ch[b2]=='g') g++;
                else if(ch[b2]=='h') h++;
                else if(ch[b2]=='i') i1++;
                else if(ch[b2]=='j') j1++;
                else if(ch[b2]=='k') k++;
                else if(ch[b2]=='l') l++;
                else if(ch[b2]=='m') m++;
                else if(ch[b2]=='n') n++;
                else if(ch[b2]=='o') o++;
                else if(ch[b2]=='p') p++;
                else if(ch[b2]=='q') q++;
                else if(ch[b2]=='r') r++;
                else if(ch[b2]=='s') s++;
                else if(ch[b2]=='t') t++;
                else if(ch[b2]=='u') u++;
                else if(ch[b2]=='v') v++;
                else if(ch[b2]=='w') w++;
                else if(ch[b2]=='x') x++;
                else if(ch[b2]=='y') y++;
                else if(ch[b2]=='z') z++;

                else if(ch[b2]=='0') a0++;
                else if(ch[b2]=='1') a1++;
                else if(ch[b2]=='2') a2++;
                else if(ch[b2]=='3') a3++;
                else if(ch[b2]=='4') a4++;
                else if(ch[b2]=='5') a5++;
                else if(ch[b2]=='6') a6++;
                else if(ch[b2]=='7') a7++;
                else if(ch[b2]=='8') a8++;
                else if(ch[b2]=='9') a9++;
            }
            if(prime[a0]) output[b3++]='0';
            if(prime[a1]) output[b3++]='1';
            if(prime[a2]) output[b3++]='2';
            if(prime[a3]) output[b3++]='3';
            if(prime[a4]) output[b3++]='4';
            if(prime[a5]) output[b3++]='5';
            if(prime[a6]) output[b3++]='6';
            if(prime[a7]) output[b3++]='7';
            if(prime[a8]) output[b3++]='8';
            if(prime[a9]) output[b3++]='9';

            if(prime[A]) output[b3++]='A';
            if(prime[B]) output[b3++]='B';
            if(prime[C]) output[b3++]='C';
            if(prime[D]) output[b3++]='D';
            if(prime[E]) output[b3++]='E';
            if(prime[F]) output[b3++]='F';
            if(prime[G]) output[b3++]='G';
            if(prime[H]) output[b3++]='H';
            if(prime[I]) output[b3++]='I';
            if(prime[J]) output[b3++]='J';
            if(prime[K]) output[b3++]='K';
            if(prime[L]) output[b3++]='L';
            if(prime[M]) output[b3++]='M';
            if(prime[N]) output[b3++]='N';
            if(prime[O]) output[b3++]='O';
            if(prime[P]) output[b3++]='P';
            if(prime[Q]) output[b3++]='Q';
            if(prime[R]) output[b3++]='R';
            if(prime[S]) output[b3++]='S';
            if(prime[T]) output[b3++]='T';
            if(prime[U]) output[b3++]='U';
            if(prime[V]) output[b3++]='V';
            if(prime[W]) output[b3++]='W';
            if(prime[X]) output[b3++]='X';
            if(prime[Y]) output[b3++]='Y';
            if(prime[Z]) output[b3++]='Z';

            if(prime[a]) output[b3++]='a';
            if(prime[b]) output[b3++]='b';
            if(prime[c]) output[b3++]='c';
            if(prime[d]) output[b3++]='d';
            if(prime[e]) output[b3++]='e';
            if(prime[f]) output[b3++]='f';
            if(prime[g]) output[b3++]='g';
            if(prime[h]) output[b3++]='h';
            if(prime[i1]) output[b3++]='i';
            if(prime[j1]) output[b3++]='j';
            if(prime[k]) output[b3++]='k';
            if(prime[l]) output[b3++]='l';
            if(prime[m]) output[b3++]='m';
            if(prime[n]) output[b3++]='n';
            if(prime[o]) output[b3++]='o';
            if(prime[p]) output[b3++]='p';
            if(prime[q]) output[b3++]='q';
            if(prime[r]) output[b3++]='r';
            if(prime[s]) output[b3++]='s';
            if(prime[t]) output[b3++]='t';
            if(prime[u]) output[b3++]='u';
            if(prime[v]) output[b3++]='v';
            if(prime[w]) output[b3++]='w';
            if(prime[x]) output[b3++]='x';
            if(prime[y]) output[b3++]='y';
            if(prime[z]) output[b3++]='z';

            output[b3]='\0';
            len=strlen(output);
            if(len!=0)
                printf("Case %d: %s\n",b1,output);
            else
                printf("Case %d: empty\n",b1);
        }
    }
    return 0;
}
