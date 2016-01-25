#include<bits/stdc++.h>
using namespace std;
#define siz 12
#define pii pair<int,int>

//int row[]={1,0,-1,0};int col[]={0,1,0,-1}; //4 Direction
//int row[]={1,1,0,-1,-1,-1,0,1};int col[]={0,1,1,1,0,-1,-1,-1};//8 direction

int row[]= {2,1,-1,-2,-2,-1,1,2};
int col[]= {1,2,2,1,-1,-2,-2,-1}; //Knight Direction

int mat[siz][siz];

int R,Q;

char c1,c2;

void bfs(int s_r,int s_c,int d_r,int d_c)
{

    queue <pii>q;

    q.push(pii(s_r,s_c));

    mat[s_r][s_c] = 0;

    while(!q.empty())
    {
        pii top = q.front();

        q.pop();

        for(int k=0; k<8; k++)
        {
            int tx = top.first+row[k];
            int ty = top.second+col[k];

            if(tx>=1&&tx<=8&&ty>=1&&ty<=8&&mat[tx][ty]==0)
            {
                mat[tx][ty] = mat[top.first][top.second]+1;

                if(tx==d_r&&ty==d_c)
                {
                    cout<<"To get from "<<c1<<s_r<<" to "<<c2<<d_r<<" takes "<<mat[tx][ty]<<" knight moves."<<endl;
                    break;
                }

                q.push(pii(tx,ty));
            }
        }
    }

}


int main()
{

    int s_r,s_c,d_r,d_c;

    while(cin>>c1>>s_r>>c2>>d_r)
    {

        for(int i=1; i<=8; i++)
            for(int j=1; j<=8; j++)
                mat[i][j]=0;


        s_c = c1-'a'+1;

        d_c = c2-'a'+1;

        if(c1==c2&&s_r==d_r)
            cout<<"To get from "<<c1<<s_r<<" to "<<c2<<d_r<<" takes "<<mat[d_c][d_r]<<" knight moves."<<endl;

        else
            bfs(s_r,s_c,d_r,d_c);

    }

    return 0;
}
