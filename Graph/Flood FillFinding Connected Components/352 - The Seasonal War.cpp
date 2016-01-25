#include<bits/stdc++.h>
using namespace std;
#define siz 30

char ar[siz][siz];

int cnt,m;

void floodfill(int a, int b, char c)
{
    if(a<0||a==m||b<0||b==m||c!=ar[a][b])
        return;
    ar[a][b] = '0';
    floodfill(a-1,b,c);
    floodfill(a+1,b,c);
    floodfill(a,b-1,c);
    floodfill(a,b+1,c);

    floodfill(a-1,b-1,c);
    floodfill(a+1,b+1,c);
    floodfill(a-1,b+1,c);
    floodfill(a+1,b-1,c);
}

int main()
{
    int cases=1;
    while(cin>>m)
    {
        for(int i=0; i<m; i++)
            for(int j=0; j<m; j++)
                cin>>ar[i][j];

        cnt=0;

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(ar[i][j]=='1')
                {
                    cnt++;
                    floodfill(i,j,ar[i][j]);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",cases++,cnt);
    }
    return 0;
}
