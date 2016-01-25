#include<bits/stdc++.h>
using namespace std;
#define siz 55

char ar[siz][siz];
vector<char>ch;

int cnt,m,n;
vector<int>array;

void floodfill(int a, int b, char c)
{
    if(a<0||a==m||b<0||b==n||c!=ar[a][b])
        return;
    cnt++;
    ar[a][b] = '.';
    floodfill(a-1,b,c);
    floodfill(a+1,b,c);
    floodfill(a,b-1,c);
    floodfill(a,b+1,c);
}

int main()
{
    int cases=1;
    while(scanf("%d%d",&m,&n))
    {
        if(m==0&&n==0)
            break;

        ch.clear();
        array.clear();

        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                cin>>ar[i][j];

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ar[i][j]!='.')
                {
                    cnt=0;
                    ch.push_back(ar[i][j]);

                    floodfill(i,j,ar[i][j]);

                    array.push_back(cnt);
                }
            }
        }

        for(int i=0; i<array.size(); i++)
        {
            for(int j=0; j<array.size(); j++)
            {
                if(array[j]<array[i])
                {
                    int temp = array[j];
                    array[j]=array[i];
                    array[i]=temp;

                    char c = ch[j];
                    ch[j] = ch[i];
                    ch[i] = c;
                }
                if(array[j]==array[i])
                {
                    if(ch[j]>ch[i])
                    {
                        char c = ch[j];
                        ch[j] = ch[i];
                        ch[i] = c;
                    }
                }
            }
        }

        cout<<"Problem "<<cases++<<":\n";
        for(int i=0; i<array.size(); i++)
            cout<<ch[i]<<" "<<array[i]<<endl;
    }
    return 0;
}
