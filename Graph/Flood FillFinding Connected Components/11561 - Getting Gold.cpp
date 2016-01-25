#include<bits/stdc++.h>
using namespace std;
#define siz 51

int cnt,m,n,visit[siz][siz];

char mat[siz][siz];

void floodfill(int a, int b)
{
    if(a<1||a>n||b<1||b>m||visit[a][b]==1)
        return;

    visit[a][b]=1;

    if(mat[a][b]=='#')
        return;

    if(mat[a][b]=='G') cnt++;

    if((mat[a-1][b]=='T'&&a-1>=1)||(mat[a+1][b]=='T'&&a+1<=n)||(mat[a][b-1]=='T'&&b-1>=1)||(mat[a][b+1]=='T'&&b+1<=m))
        return;

    floodfill(a-1,b);
    floodfill(a+1,b);
    floodfill(a,b-1);
    floodfill(a,b+1);
}

int main()
{
    int x,y;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
            {
                cin>>mat[i][j];

                if(mat[i][j]=='P')
                {
                    x=i,y=j;
                }
            }

        memset(visit,-1,sizeof visit);

        cnt=0;

        floodfill(x,y);

        printf("%d\n",cnt);

    }

    return 0;
}
