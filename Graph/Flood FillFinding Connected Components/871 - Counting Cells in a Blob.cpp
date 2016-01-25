#include<bits/stdc++.h>
using namespace std;

vector<string>ar;

int cnt,m,n;

void floodfill(int a, int b, char c)
{
    if(a<0||a==m||b<0||b==n||ar[a][b]=='0')
        return;
    cnt++;
    ar[a][b] = '0';
    floodfill(a-1,b,c);
    floodfill(a+1,b,c);
    floodfill(a,b-1,c);
    floodfill(a,b+1,c);
    floodfill(a+1,b+1,c);
    floodfill(a-1,b-1,c);
    floodfill(a+1,b-1,c);
    floodfill(a-1,b+1,c);
}

int main()
{
    int cases=1,test,check=0;

    string str;

    cin>>test;

    getline(cin,str);
    getline(cin,str);
    while(test--)
    {
        ar.clear();

        m=0;

        while(getline(cin,str))
        {
            if(str.size()==0)
                break;
            ar.push_back(str);
            n = str.size();
            m++;
        }

        int maximum = 0;

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ar[i][j]=='1')
                {
                    cnt=0;

                    floodfill(i,j,ar[i][j]);

                    maximum = max(cnt,maximum);
                }
            }
        }
        if(check)
            cout<<endl;
        cout<<maximum<<endl;
        check=1;
    }
    return 0;
}
