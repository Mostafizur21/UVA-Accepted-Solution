#include<bits/stdc++.h>
using namespace std;
#define siz 105

char ar[siz][siz];

int check;

void floodfill(int a, int b, int m, int n)
{
    int x,y;
    ar[a][b]='?';

    for(int x=-1; x<2; x++)
        for(int y=-1; y<2; y++)
        {
            int newx=x+a, newy=y+b;
            if(newx>=0&&newx<m&&newy>=0&&newy<n)
            {
                if(ar[newx][newy]=='*')
                {
                    check=1;
                    floodfill(newx,newy,m,n);
                }
            }
        }
}

int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n))
    {
        if(m==0&&n==0)
            break;

        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                cin>>ar[i][j];

        int cnt=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ar[i][j]=='*')
                {
                    cnt++;
                    check=0;
                    floodfill(i,j,m,n);

                    if(check)
                        cnt--;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
