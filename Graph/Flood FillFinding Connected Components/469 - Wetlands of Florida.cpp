#include<bits/stdc++.h>
using namespace std;

vector<string>ar;

vector<int>v1;
vector<int>v2;

int cnt,m,n;

void floodfill(int a, int b, char c)
{
    if(a<0||a>=m||b<0||b>=n||ar[a][b]=='L')
        return;
    cnt++;
    ar[a][b] = 'L';
    v1.push_back(a);
    v2.push_back(b);
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
        if(check)
            cout<<endl;
        check=1;

        ar.clear();

        m=0;

        while(getline(cin,str))
        {
            if(str.size()==0)
                break;
            else if(str[0]>='0'&&str[0]<='9')
            {
                v1.clear();
                v2.clear();

                char ch[10];
                int in=0,i,j;
                for(int a=0; a<str.size(); a++)
                {
                    if(str[a]==' ')
                    {
                        ch[in]='\0';
                        i = atoi(ch);
                        in=0;
                    }
                    else
                        ch[in++]=str[a];
                }
                ch[in]='\0';
                j = atoi(ch);

                cnt=0;

                floodfill(i-1,j-1,'W');

                for(int a=0;a<v1.size();a++)
                {
                        ar[v1[a]][v2[a]] = 'W';
                }

                cout<<cnt<<endl;
            }
            else
            {
                ar.push_back(str);
                n = str.size();
                m++;
            }
        }
    }
    return 0;
}
