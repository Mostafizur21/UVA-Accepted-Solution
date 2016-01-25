#include<bits/stdc++.h>
using namespace std;

char ar[105][105];
vector<char>ch;

int cnt,m,n;
int array[30];
vector<int>arr;

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
    int cases=1,test;
    cin>>test;
    while(test--)
    {
        scanf("%d%d",&m,&n);

        ch.clear();
        arr.clear();

        memset(array,0,sizeof(array));

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
                    char temp = ar[i][j];

                    floodfill(i,j,ar[i][j]);

                    array[temp-97]++;
                }
            }
        }

        for(int i=0; i<30; i++)
        {
            if(array[i]>0)
            {
                ch.push_back(97+i);
                arr.push_back(array[i]);
            }
        }


        //ordering
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=0; j<arr.size(); j++)
            {
                if(arr[j]<arr[i])
                {
                    int temp = arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;

                    char c = ch[j];
                    ch[j] = ch[i];
                    ch[i] = c;
                }
                if(arr[j]==arr[i])
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

        cout<<"World #"<<cases++<<endl;
        for(int i=0; i<arr.size(); i++)
            cout<<ch[i]<<": "<<arr[i]<<endl;
    }
    return 0;
}
