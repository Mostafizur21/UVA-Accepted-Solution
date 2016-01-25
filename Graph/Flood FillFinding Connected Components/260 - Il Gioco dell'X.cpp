#include<bits/stdc++.h>
using namespace std;

char ar[202][202];

int m;
set<int>arr;
set<int>::iterator it;

void floodfill(int a, int b, char c)
{
    if(a<0||a==m||b<0||b==m||c!=ar[a][b])
        return;

    arr.insert(b);
    ar[a][b] = '.';
    floodfill(a-1,b-1,c);
    floodfill(a-1,b,c);
    floodfill(a,b-1,c);
    floodfill(a,b+1,c);
    floodfill(a+1,b,c);
    floodfill(a+1,b+1,c);
}

int main()
{
    int cases=1;
    while(scanf("%d",&m))
    {
        if(m==0)
            break;

        arr.clear();

        for(int i=0; i<m; i++)
            for(int j=0; j<m; j++)
                cin>>ar[i][j];

        int k,x,y;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                k=0,x=0,y=0;

                if(ar[i][j]=='w')
                {
                    floodfill(i,j,ar[i][j]);

                    for(it = arr.begin(); it!=arr.end(); it++)
                    {
                        if(k!=*it)
                        {
                            x=1;
                            break;
                        }
                        k++;
                    }

                    if(x==1||k!=m)
                    {
                        arr.clear();
                    }
                    else
                    {
                        y=1;
                        break;
                    }
                }
            }
            if(y==1)
                break;
        }
        if(y==1)
            cout<<cases++<<" W"<<endl;
        else
            cout<<cases++<<" B"<<endl;
    }
    return 0;
}
