#include<bits/stdc++.h>
using namespace std;
#define siz 1002
#define pii pair<int,int>

int fx[] = {1,-1,0,0};

int fy[] = {0,0,1,-1};

int mat[siz][siz];

int R,Q;

void bfs(int s_r,int s_c)
{

    queue <pii>q;

    q.push(pii(s_r,s_c));

    mat[s_r][s_c] = 0;

    while(!q.empty())
    {
        pii top = q.front();

        q.pop();

        for(int k=0; k<4; k++)
        {
            int tx = top.first+fx[k];
            int ty = top.second+fy[k];

            if(tx>=0&&tx<R&&ty>=0&&ty<Q&&mat[tx][ty]==-1)
            {
                mat[tx][ty] = mat[top.first][top.second]+1;

                q.push(pii(tx,ty));
            }
        }
    }

}


int main()
{
    int bomb,r,c,n,s_r,s_c,d_r,d_c,row,i,j;

    while(scanf("%d%d",&R,&Q)==2)
    {
        if(R==0&&Q==0)
            break;

        for(i=0; i<R; i++)
            for(j=0; j<Q; j++)
                mat[i][j]=-1;

        scanf("%d",&row);

        for(j=0; j<row; j++)
        {
            scanf("%d%d",&r,&bomb);

            for(i=1; i<=bomb; i++)
            {
                scanf("%d",&c);

                mat[r][c]=1;//cell are blocked
            }
        }

        scanf("%d%d%d%d",&s_r,&s_c,&d_r,&d_c);

        bfs(s_r,s_c);

        printf("%d\n",mat[d_r][d_c]);

    }

    return 0;
}
