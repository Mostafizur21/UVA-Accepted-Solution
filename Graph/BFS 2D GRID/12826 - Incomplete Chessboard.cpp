#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
#define siz 10

int mat[siz][siz];

struct data
{
    int r,c;
};

void bfs(int s_r,int s_c)
{
    queue <data> q;
    data u,upos,in;
    u.r=s_r;
    u.c=s_c;
    mat[u.r][u.c]=0;
    q.push(u);
    while(!q.empty())
    {
        upos=q.front();
        q.pop();
        if(upos.r-1>=1&&mat[upos.r-1][upos.c]<0)
        {
            in.r=upos.r-1;
            in.c=upos.c;
            mat[upos.r-1][upos.c]=mat[upos.r][upos.c]+1;
            q.push(in);
        }
        if(upos.r+1<=8&&mat[upos.r+1][upos.c]<0)
        {
            in.r=upos.r+1;
            in.c=upos.c;
            mat[upos.r+1][upos.c]=mat[upos.r][upos.c]+1;
            q.push(in);
        }
        if(upos.c-1>=1&&mat[upos.r][upos.c-1]<0)
        {
            in.r=upos.r;
            in.c=upos.c-1;
            mat[upos.r][upos.c-1]=mat[upos.r][upos.c]+1;
            q.push(in);
        }
        if(upos.c+1<=8&&mat[upos.r][upos.c+1]<0)
        {
            in.r=upos.r;
            in.c=upos.c+1;
            mat[upos.r][upos.c+1]=mat[upos.r][upos.c]+1;
            q.push(in);
        }


        //daigonally

        if(upos.c+1<=8&&upos.r+1<=8&&mat[upos.r+1][upos.c+1]<0)
        {
            in.r=upos.r+1;
            in.c=upos.c+1;
            mat[upos.r+1][upos.c+1]=mat[upos.r][upos.c]+1;
            q.push(in);
        }

        if(upos.c-1>=1&&upos.r-1>=1&&mat[upos.r-1][upos.c-1]<0)
        {
            in.r=upos.r-1;
            in.c=upos.c-1;
            mat[upos.r-1][upos.c-1]=mat[upos.r][upos.c]+1;
            q.push(in);
        }

        if(upos.c-1>=1&&upos.r+1>=1&&mat[upos.r+1][upos.c-1]<0)
        {
            in.r=upos.r+1;
            in.c=upos.c-1;
            mat[upos.r+1][upos.c-1]=mat[upos.r][upos.c]+1;
            q.push(in);
        }

        if(upos.c+1>=1&&upos.r-1>=1&&mat[upos.r-1][upos.c+1]<0)
        {
            in.r=upos.r-1;
            in.c=upos.c+1;
            mat[upos.r-1][upos.c+1]=mat[upos.r][upos.c]+1;
            q.push(in);
        }

    }

}

int main()
{
    int s_r,s_c,d_r,d_c,i,j,r3,c3,test=1;
    while(scanf("%d%d%d%d%d%d",&s_r,&s_c,&d_r,&d_c,&r3,&c3)!=EOF)
    {
        for(i=1; i<=8; i++)
            for(j=1; j<=8; j++)
                mat[i][j]=-1;

        mat[r3][c3]=1;

        bfs(s_r,s_c);

        printf("Case %d: %d\n",test++,mat[d_r][d_c]);

    }

    return 0;

}
