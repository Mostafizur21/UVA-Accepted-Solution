#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int L,N,i,j,k,m,n,p,q,len;
    string s[22][2],ch;
    scanf("%d %d",&L,&N);
    getchar();
    for(i=0;i<L;i++)
    {
        for(j=0;j<=1;j++)
            cin>>s[i][j];
    }
    for(k=0;k<N;k++)
    {
        p=0;
        cin>>ch;
        len=ch.size();
        for(m=0;m<L;m++)
        {
            for(n=0;n<1;n++)
            {
                if(s[m][n]==ch)
                {
                    cout<<s[m][1];
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==0)
        {
          for(q=0;q<ch.size();q++)
          {
              if(q+1==len&&ch[q]=='y'&&(ch[q-1]!='a'&&ch[q-1]!='e'&&ch[q-1]!='i'&&ch[q-1]!='o'&&ch[q-1]!='u'))
                printf("ies");

              else if(q+1==len&&(ch[q]=='o'||ch[q]=='s'||ch[q]=='x'))
              {
                  printf("%c",ch[q]);
                  printf("es");
              }

              else if(q+1==len&&((ch[q]=='h'&&ch[q-1]=='c')||(ch[q]=='h'&&ch[q-1]=='s')))
              {
                  printf("%c",ch[q]);
                  printf("es");
              }

              else if(q+1==len)
              {
                  printf("%c",ch[q]);
                  printf("s");
              }
              else
                printf("%c",ch[q]);
          }
        }
        printf("\n");
    }
    return 0;
}
